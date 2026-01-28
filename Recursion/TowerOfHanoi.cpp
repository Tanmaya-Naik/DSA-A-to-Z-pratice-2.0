#include <bits/stdc++.h>
using namespace std;

int solve(int n, char from, char to, char aux)
{
    if (n == 1)
    {
        cout << "move disc 1 from rod " << from << " to rod " << to << endl;
        return 1;
    }

    int count = 0;

    count += solve(n - 1, from, aux, to);

    cout << "move disc " << n << " from rod " << from << " to rod " << to << endl;
    count++;

    count += solve(n - 1, aux, to, from);

    return count;
}

int main()
{
    int n;
    cin >> n;

    cout << solve(n, 'A', 'C', 'B');

    return 0;
}
