// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         int n=nums.size();
//         set<vector<int>> st;
//         for(int i=0;i<n;i++){
//             set<int> Hashset;
//             for(int j=i+1;j<n;j++){
//                 int third=-(nums[i]+nums[j]);
//                 if(Hashset.find(third)!=Hashset.end()){
//                     vector<int> temp={nums[i],nums[j],third};
//                     sort(temp.begin(),temp.end());
//                     st.insert(temp);
//                 }
//                 Hashset.insert(nums[j]);
//             }
//         }
//         vector<vector<int>> ans(st.begin(),st.end());
//         return ans;
//     }
// };




//4Th Sum
  //     int n=nums.size();
    //    set<vector<int>> st;
        
    //     for(int i=0;i<n;i++){
    //         for(int j=i+1;j<n;j++){
    //             for(int k=j+1;k<n;k++){
    //                 for(int l=k+1;l<n;l++){
    //                     long long sum=nums[i]+nums[j];
    //                     sum+=nums[k];
    //                     sum+=nums[l];
    //                     if(sum==target){
    //                         vector<int> temp={nums[i],nums[j],nums[k],nums[l]};
    //                         sort(temp.begin(),temp.end());
    //                         st.insert(temp);
    //                     }
    //                 }
    //             }
    //         }
    //     }
    //     vector<vector<int>> ans(st.begin(),st.end());
    //     return ans;
    // }
