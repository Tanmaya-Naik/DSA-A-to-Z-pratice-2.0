/*
Find all valid combinations of k numbers that sum up to n such that the following conditions are true:

Only numbers 1 through 9 are used.
Each number is used at most once.
Return a list of all possible valid combinations. The list must not contain the same combination twice, 
and the combinations may be returned in any order.


Example 1:

Input: k = 3, n = 7
Output: [[1,2,4]]
Explanation:
1 + 2 + 4 = 7
There are no other valid combinations.
Example 2:

Input: k = 3, n = 9
Output: [[1,2,6],[1,3,5],[2,3,4]]
Explanation:
1 + 2 + 6 = 9
1 + 3 + 5 = 9
2 + 3 + 4 = 9
There are no other valid combinations.
*/


/*
4Line question u should ask to yourself before solving this
Only numbers 1 through 9 are used.
and we must choose element in increasing order because chosing small number make it duplicate 
check sumtillnow for every number and count also 
if count==k theen check sum and if sum==n store that combination



*/


                                                                    // #include <bits/stdc++.h>
                                                                    // using namespace std;

                                                                    // void solve(int i, int k, int n, int currsum, vector<int>& ans, vector<vector<int>>& result){
                                                                    //     if(currsum > n){
                                                                    //         return;
                                                                    //     }

                                                                    //     if(k==0){
                                                                    //         if(currsum==n){
                                                                    //             result.push_back(ans);
                                                                                
                                                                    //         }
                                                                    //         return;
                                                                    //     }

                                                                    //     if(i==10){`````````````````````````````````````11
                                                                    //         return;
                                                                    //     }

                                                                    //     //include curr element
                                                                    //     currsum+=i;
                                                                    //     ans.push_back(i);
                                                                    //     solve(i+1,k-1,n,currsum,ans,result);
                                                                    //     currsum-=i;
                                                                    //     ans.pop_back();

                                                                    //     //exclude
                                                                    //     solve(i+1,k,n,currsum,ans,result);
                                                                    // }

                                                                    // int main(){
                                                                    //     int k;
                                                                    //     cin>>k;

                                                                    //     int n;
                                                                    //     cin>>n;

                                                                    //     vector<int> ans;
                                                                    //     vector<vector<int>> result;
                                                                    //     int currsum=0;
                                                                    //     solve(1,k,n,currsum,ans,result);

                                                                    //     for(const auto& row:result){
                                                                    //         cout<<"[";
                                                                    //         for(auto& it:row){
                                                                    //             cout<<it<<",";
                                                                    //         }
                                                                    //         cout<<"]";
                                                                    //     }

                                                                    //     return 0;

                                                                        
                                                                    // }



                                                                    //FOR LOOP APPROACH 
                                                                    //FOR LOOP APPROACH 
                                                                    //FOR LOOP APPROACH 


 #include <bits/stdc++.h>
using namespace std;

void solve(int start, int k, int n, int currsum,
           vector<int>& ans,
           vector<vector<int>>& result) {

    // Success condition
    if (k == 0) {
        if (currsum == n) {
            result.push_back(ans);
        }
        return;
    }

    // Try all possible next numbers
    for (int num = start; num <= 9; num++) {

        // Prune if sum exceeds
        if (currsum + num > n)
            break;

        ans.push_back(num);

        // Move forward (num + 1 ensures no reuse)
        solve(num + 1, k - 1, n, currsum + num, ans, result);

        // Backtrack
        ans.pop_back();
    }
}

int main() {
    int k, n;
    cin >> k >> n;

    vector<int> ans;
    vector<vector<int>> result;

    solve(1, k, n, 0, ans, result);

    for (auto &row : result) {
        cout << "[";
        for (int i = 0; i < row.size(); i++) {
            cout << row[i];
            if (i != row.size() - 1) cout << ",";
        }
        cout << "] ";
    }

    return 0;
}
