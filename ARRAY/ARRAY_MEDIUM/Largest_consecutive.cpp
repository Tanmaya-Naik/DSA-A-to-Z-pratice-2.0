#include <bits/stdc++.h>
using namespace std;

// bool ls(vector<int> &a,int num){
//     int n=a.size();
//     for (int i = 0; i < n; i++)
//     {
//         if(a[i] == num){
//             return true;
//         }
//     }
//     return false;
    
// }


// int longestsqe(vector<int>& a){
//     int n=a.size();
//     int longest=1;
    
//     for(int i=0;i<n;i++){
//         int cnt=1;
//         int x=a[i];
        
//         while (ls(a,x+1) == true)
//         {
//             x+=1;
//             cnt+=1;

//         }
//         longest=max(longest,cnt);
//     }
//     return longest;
// }
// int main()
// {
//     vector<int> a = {100, 200, 1, 2, 3, 4};
//     int ans = longestsqe(a);
//     cout << "The longest consecutive sequence is " << ans << "\n";
//     return 0;
// }

int longestsqe(vector<int> a){
    int n=a.size();
    sort(a.begin(),a.end());

    int last_small=INT_MIN;
    int cnt=0;
    int longest=1;

    for(int i=0;i<n;i++){
        if(a[i]-1 == last_small){
            cnt+=1;
            last_small=a[i];
        }
        else if(a[i] != last_small){
            cnt=1;
            last_small=a[i];
        }
        longest=max(longest,cnt);
    }

    return longest;
}
int main()
{
    vector<int> a = {100, 200, 1, 2, 3, 4};
    int ans = longestsqe(a);
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
}