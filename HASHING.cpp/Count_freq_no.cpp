#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int hash[13] = {0}; // Initialize array to 0
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0 && arr[i] < 13) // Prevent out-of-bound access
            hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;
        if (number >= 0 && number < 13)
            cout << hash[number] << endl;
        else
            cout << "Out of range" << endl;
    }

    return 0;
}


