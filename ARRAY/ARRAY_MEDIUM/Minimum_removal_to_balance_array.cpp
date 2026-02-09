/*
You are given an integer array nums and an integer k.

An array is considered balanced if the value of its maximum element is at most k times the minimum element.

You may remove any number of elements from nums​​​​​​​ without making it empty.

Return the minimum number of elements to remove so that the remaining array is balanced.

Note: An array of size 1 is considered balanced as its maximum and minimum are equal, and the condition always holds true.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 6, 9, 2}; // 1,2,3,4,7,8
    int sizee = arr.size();
    cout << sizee << endl;

    int k = 2;

    // sliding window apppraoch
    sort(arr.begin(), arr.end());

    int l = 0;
    int r = 0;
    int max_length_window = 0;

    while (r < sizee)
    {
        long long minn = arr[l];
        long long maxx = arr[r];

        if (maxx > minn * k)
        {
            l++;
        }
        else
        {
            max_length_window = max(max_length_window, r - l + 1);
        }
        r++;
    }

    int ans = sizee - max_length_window;

    cout << ans << endl;
    return 0;
}