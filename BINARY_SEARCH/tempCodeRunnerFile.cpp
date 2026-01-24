#include <bits/stdc++.h>
using namespace std;

int last_occurance(int n, int key, vector<int> &arr)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int firstOccurance(int n, int key, vector<int> &arr)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
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
    int n = 8;
    int key = 13;
    vector<int> v = {3, 13, 13, 13, 13, 13, 18, 40};

    // returning the last occurrence index if the element is present otherwise -1
    cout << firstOccurance(n, key, v) << "\n";
    cout << last_occurance(n, key, v) << "\n";

    return 0;
}