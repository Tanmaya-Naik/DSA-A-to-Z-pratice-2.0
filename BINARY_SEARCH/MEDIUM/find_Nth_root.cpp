#include <bits/stdc++.h>
using namespace std;

// // class Solution
// // {
// // public:
// //     // Function to find Nth root of M
// //     int nthRoot(int n, int m)
// //     {
// //         // Loop from 1 to m
// //         for (int i = 1; i <= m; i++)
// //         {
// //             // Compute i^n
// //             long long power = pow(i, n);

// //             // If equal to m, return i
// //             if (power == m)
// //                 return i;

// //             // If exceeds m, break
// //             if (power > m)
// //                 break;
// //         }

// //         // If not found, return -1
// //         return -1;
// //     }
// // };

// // int main()
// // {
// //     Solution sol;
// //     int n = 3, m = 25;

// //     // Find nth root
// //     cout << "Nth Root: " << sol.nthRoot(n, m) << endl;

// //     return 0;
// // }

class Solution
{
public:
    int nthRoot(int n, int m)
    {
        int start = 1, end = m;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            long long ans = 1;
            for (int i = 0; i < n; i++)
            {
                ans *= mid;
                if (ans > m)
                    break;
            }

            if (ans == m)
                return mid;

            if (ans < m)
                start = mid + 1;

            if (ans > m)
                end = mid - 1;
        }

        return -1;
    }
};
int main()
{
    Solution sol;
    int n = 3, m = 64;

    // Find nth root
    cout << "Nth Root: " << sol.nthRoot(n, m) << endl;

    return 0;
}
