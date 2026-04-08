//  class Solution {
// public:
//     int findPeakElement(vector<int>& arr) {
//         int n=arr.size();
//         int start=0,end=n-1;

//         if(n==1) return 0;

//         if(arr[0] > arr[1] ) return 0;

//         if(arr[n-1] > arr[n-2]) return n-1;

//         while(start < end){
//             int mid=(start+end)/2;

//             if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
//                 return mid;
//             }

//             else if(arr[mid] > arr[mid-1]){  //peak is present at left half
//                 start=mid+1;
//             }

//             else{
//                 end=mid-1;
//             }
//         }

//         return -1;
//     }
// };

//check halfs 
#include <bits/stdc++.h>
using namespace std;

int findpeak(vector<int> &nums,int n){
    int start=0;
    int end=n-1;

    if(n==1){
        return 0;
    }
    if(n==2){
        if(nums[0]>nums[1]){
            return 0;
        }
        else{
            return 1;
        }
    }

    while(start < end){
        int mid=start+ (end-start)/2;

        if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]){
            return mid;
        }
        else if(nums[mid] > nums[mid+1]){ // so definately peak is in the left half bcz we are on non decreasing half
            end=mid-1;
        }
        else{
            start=mid;
        }
    }

    return -1;

}

int main(){
    vector<int> nums={1,2};
    int n=nums.size();

    cout<<"So the index of peak element is = "<<findpeak(nums,n)<<endl;

    return 0;

    
}