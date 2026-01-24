#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <climits>
#include <functional>

using namespace std;

bool canPoliceCatchThief(int N, int M, vector<pair<int, int>>& connections, int T, int P) {
    // Build adjacency list
    vector<vector<int>> adj(N + 1);
    for (auto& edge : connections) {
        adj[edge.first].push_back(edge.second);
        adj[edge.second].push_back(edge.first);
    }

    // Check if thief is in a cycle of length ≥ 4
    bool inCycle = false;
    vector<int> visited(N + 1, 0);
    vector<int> parent(N + 1, -1);

    function<bool(int, int)> hasCycle;
    hasCycle = [&](int u, int depth) -> bool {
        visited[u] = 1;
        for (int v : adj[u]) {
            if (v == parent[u]) continue;
            if (visited[v] == 1) {
                int cycleLength = depth;
                int current = u;
                while (current != v && parent[current] != -1) {
                    current = parent[current];
                    cycleLength++;
                }
                if (cycleLength >= 4) {
                    return true;
                }
            } else if (visited[v] == 0) {
                parent[v] = u;
                if (hasCycle(v, depth + 1)) {
                    return true;
                }
            }
        }
        visited[u] = 2;
        return false;
    };

    inCycle = hasCycle(T, 1);

    if (!inCycle) return true;

    // BFS from police
    vector<int> policeDist(N + 1, INT_MAX);
    queue<int> q;
    q.push(P);
    policeDist[P] = 0;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (int v : adj[u]) {
            if (policeDist[v] == INT_MAX) {
                policeDist[v] = policeDist[u] + 1;
                q.push(v);
            }
        }
    }

    if (policeDist[T] == INT_MAX) return false;

    // BFS from thief
    vector<int> thiefDist(N + 1, INT_MAX);
    q.push(T);
    thiefDist[T] = 0;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (int v : adj[u]) {
            if (thiefDist[v] == INT_MAX) {
                thiefDist[v] = thiefDist[u] + 1;
                q.push(v);
            }
        }
    }

    vector<bool> inLongCycle(N + 1, false);
    for (int u = 1; u <= N; ++u) {
        if (visited[u] == 2) {
            inLongCycle[u] = true;
        }
    }

    for (int u = 1; u <= N; ++u) {
        if (inLongCycle[u] && thiefDist[u] < policeDist[u]) {
            return false;
        }
    }

    return true;
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<pair<int, int>> connections(M);
    for (int i = 0; i < M; ++i) {
        cin >> connections[i].first >> connections[i].second;
    }

    int T, P;
    cin >> T >> P;

    cout << (canPoliceCatchThief(N, M, connections, T, P) ? "YES" : "NO") << endl;

    return 0;
}
// INPUT
// 6 7
// 1 2
// 2 3
// 3 4
// 4 2
// 3 5
// 5 6
// 6 1
// 3 1
