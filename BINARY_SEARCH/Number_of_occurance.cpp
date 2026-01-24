                                                            // #include <bits/stdc++.h>
                                                            // using namespace std;

                                                            // int count(vector<int> arr, int n, int x)
                                                            // {
                                                            //     int cnt = 0;
                                                            //     for (int i = 0; i < n; i ++)
                                                            //     {
                                                            //         if (arr[i] == x)
                                                            //         {
                                                            //             cnt++;
                                                            //         }
                                                            //     }

                                                            //     return cnt;
                                                            // }

                                                            // int main()
                                                            // {
                                                            //     vector<int> arr = {2, 4, 6, 8, 8, 8, 11, 13};
                                                            //     int n = 8, x = 8;
                                                            //     int ans = count(arr, n, x);
                                                            //     cout << "The number of occurrences is: "
                                                            //          << ans << "\n";
                                                            //     return 0;
                                                            // }
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

pair<int,int> firstandlastoccurance(vector<int> &arr,int n,int key){
    int first=firstOccurance(n,key,arr);
    if(first==-1) return {-1,-1};
    int last=last_occurance(n,key,arr);
    return {first,last};
}

int count(vector<int> &arr,int n,int x){
    pair<int,int> ans=firstandlastoccurance(arr,n,x);
    if(ans.first == -1) return 0;
    return (ans.second -ans.first +1);
}

int main()
{
    int n = 7;
    int key = 13;
    vector<int> arr = {3, 13, 13, 13, 13, 18, 40};

    // returning the last occurrence index if the element is present otherwise -1
    // cout << firstOccurance(n, key, v) << "\n";
    // cout << last_occurance(n, key, v) << "\n";

    cout<<count(arr,n,key);

    return 0;
}