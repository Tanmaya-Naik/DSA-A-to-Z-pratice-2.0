#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &arr, int idx, int target, vector<int> &ans, vector<vector<int>> &res)
{
    int n=arr.size();

    if (target == 0)
    {
        res.push_back(ans);
        return;
    }

    if (idx == arr.size() || target < 0)
    {
        return;
    }

    for(int i=idx;i<n;i++){
        if(i > idx && arr[i]==arr[i-1]){
            continue;
        }

        if(arr[i] > target){
            break;
        }

        //include
        ans.push_back(arr[i]);
        solve(arr,i+1,target-arr[i],ans,res);
        ans.pop_back();
    }
}

int main()
{
    vector<int> arr = {10, 1, 2, 7, 6, 1, 5};
    int target = 8;
    sort(arr.begin(),arr.end());

    vector<int> ans;
    vector<vector<int>> res;
    
    solve(arr, 0, target, ans, res);

    for (const auto &row : res)
    {
        cout << "[";
        for (auto it : row)
        {
            cout << it << ",";
        }
        cout << "]";
    }

    return 0;
}