#include <bits/stdc++.h>
using namespace std;

int UpperBound(vector<int> arr, int n, int x)
{
    int left = 0;
    int right = n - 1;
    int ans = n;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] > x)
        {
            ans = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {3, 5, 8, 15, 19};
    int n = 5, x = 19;
    int ind = upper_bound(arr.begin(),arr.end(),x)-arr.begin();
    cout << "The lower bound is the index: " << ind << "\n";
    return 0;
}
