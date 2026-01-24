//-------------------------------------------------------------BRUTE FORCE------------------------------------
//TIME COMPLEXITY O(n^3)

#include <bits/stdc++.h>
using namespace std;


vector<int> LongestSubarray(vector<int> nums,int target){
    int n=nums.size();
    int maxlength=-1;
    int beststart=0;
    int bestend=0;
    int currsum=0;
    for(int start=0;start<n;start++){
         currsum=0;
        for(int end=start;end<n;end++){
            currsum+=nums[end];
            if(currsum==target){
                    if((end-start+1) > maxlength){
                        maxlength=end-start+1;
                        beststart=start;
                        bestend=end;
                    }
                }
        }   
    }
    

    vector<int> result;
    for(int i=beststart;i<=bestend;i++){
        result.push_back(nums[i]);
    }
    int sizeee=result.size();
    cout<<"The length of the longest subaaray sum equal to k is "<<sizeee<<endl;

    return result;

    
}
int main(){
    vector<int> nums={2,3,5,1,2,-1,3,4,-1,1,9,10};
    int target=10;
    vector<int> ans=LongestSubarray(nums,target);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<",";
    }

    return 0;

}