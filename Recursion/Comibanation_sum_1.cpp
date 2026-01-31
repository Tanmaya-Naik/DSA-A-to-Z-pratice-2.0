#include <bits/stdc++.h>
using namespace std;

set<vector<int>> st;

void getallcombination(vector<int>& arr, int i, int target, vector<int>& ans, vector<vector<int>>& res){

    
    if(target==0){
        if(st.find(ans) == st.end()){
            res.push_back(ans);
            st.insert(ans);
        }
        return;
    }

    if(i==arr.size() || target<0){
        return;
    }


    //lets write code for include one time
    ans.push_back(arr[i]);
    getallcombination(arr,i+1,target-arr[i],ans,res);

    //call for include multiple time where the index will stay same
    getallcombination(arr,i,target-arr[i],ans,res);

    //exclude this element
    ans.pop_back(); //for backtracking
    getallcombination(arr,i+1,target,ans,res);

}

int main(){
    vector<int> arr={2,3,5};
    int target=8;

    vector<int> ans;
    vector<vector<int>> res;
    getallcombination(arr,0,target,ans,res);

    for(const auto &row:st){
        cout<<"[";
        for(auto it:row){
            cout<<it<<",";
        }
        cout<<"]";
    }

    return 0;

    
}