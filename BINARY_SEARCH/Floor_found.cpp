#include <bits/stdc++.h>
using namespace std;

int floor(vector<int> &arr, int n, int x)
{
    int left = 0;
    int right = n - 1;
    int ans = -1;
    ;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] <= x)
        {
            ans = arr[mid];
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {3, 5, 8, 15, 19};
    int n = 5, x = 17;
    int ind = floor(arr, n, x);
    cout << "The lower bound is the index: " << ind << "\n";
    return 0;
}