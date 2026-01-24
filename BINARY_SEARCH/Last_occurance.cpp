#include <bits/stdc++.h>
using namespace std;

int solveBF(int n, int key, vector<int> v)
{
    int ans = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] == key)
        {
            return i;
            break;
        }
    }
    return ans;
}

int solve(int n,int key,vector<int> v){
    int start=0;
    int end=n-1;
    int ans=-1;

    while(start <= end){
        int mid=(start+end)/2;
        if(v[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(v[mid] < key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}
int main()
{
    int n = 8;
    int key = 13;
    vector<int> v = {3, 4, 13, 13, 13, 18, 20, 40};

    // returning the last occurrence index if the element is present otherwise -1
    cout << solveBF(n, key, v) << "\n";
    cout << solve(n, key, v) << "\n";

    return 0;
}