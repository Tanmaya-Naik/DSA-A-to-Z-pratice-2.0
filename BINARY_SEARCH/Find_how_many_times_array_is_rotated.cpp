#include <bits/stdc++.h>
using namespace std;

int Timesrotate(vector<int> &nums, int n){
    int start = 0;
    int end = n-1;

    while(start < end){
        int mid = start + (end-start)/2;

        if(nums[mid]> nums[end]) //so the minimum element is present on the right half of the sorted arrya
        {
            start=mid+1;
        }
        else{
            end=mid;
        }
    }

    return start;
}

int main(){
    vector<int> nums= {4,5,6,7,8,9,10,1,2};
    int n= nums.size();

    cout<<"The total numbere of time the array is rotated= "<<Timesrotate(nums,n)<<endl;
    return 0;
}