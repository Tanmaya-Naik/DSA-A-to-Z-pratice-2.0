// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& nums) {
//         int n=nums.size();
//         vector<int> posInt;
//         vector<int> NegInt;
//         vector<int> newArr;
//         for(int i=0;i<n;i++){
//             if(nums[i] < 0){
//                 NegInt.push_back(nums[i]);
//             }
//             else{
//                 posInt.push_back(nums[i]);
//             }
//         }
//         int t=0;
//         int s=0;

       
//         for(int k=0;k<n;k++)
//         {
//             if(k%2==0)
//             { 
//                 newArr.push_back(posInt[t]);
//                 t++;
//             }
//             else{
//                 newArr.push_back(NegInt[s]);
//                     s++;
//             }
            
            
//         }
    
//         return newArr;
//     }
// };