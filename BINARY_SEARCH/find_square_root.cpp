// Input: N = 36
// Output: 6
// Explanation: Square root of 36 is 6.
// Input: N = 28
// Output: 5
// Explanation: Square root of 28 is approximately 5.292. So, the floor value will be 5

#include <bits/stdc++.h>
using namespace std;
// typedef long long ll;
int findroot(int x)
{

    if (x < 2)
        return x;
    long long start = 1;
    long long end = x / 2;
    int ans = 0;

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

int main()
{
    cout << "The square root of the value is " << findroot(49) << endl;
    return 0;
}