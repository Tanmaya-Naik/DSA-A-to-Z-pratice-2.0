// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n = 35;
//     int ans = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         if (i * i <= n)
//         {
//             ans = i;
//         }
//     }

//     cout << "Output is " << ans;

//     return 0;
// }

// BINARY SEARCH METHOD

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int mysqrt(int x)
    {
        int start = 1;
        int end = x / 2;
        int ans = 0;

        if (x < 2)
            return x;

        while (start <= end)
        {
            long long mid = start + (end - start) / 2;

            if (mid * mid <= x)
            {
                ans = mid;
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }

        return ans;
    }
};

int main()
{
    Solution s;
    cout << s.mysqrt(35) << endl;
    return 0;
}