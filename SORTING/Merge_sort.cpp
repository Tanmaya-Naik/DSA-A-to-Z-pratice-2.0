#include <bits/stdc++.h>
using namespace std;

void merge_sort(int arr[],int st,int mid,int end){
    int left=st;
    int right=mid+1;
    vector<int> temp;

    while (left <= mid && right<=end)
    {
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }

        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
       
            temp.push_back(arr[left]);
            left++;
        
    }
    while (right <=end)
    {
            temp.push_back(arr[right]);
            right++;
    }
    
    for (int i = st; i <=end; i++)
    {
        arr[i]=temp[i-st];
    }
}


void ms(int arr[],int st,int end){
    if(st==end) return;

    int mid=(st+end)/2;
    ms(arr,st,mid);
    ms(arr,mid+1,end);
    merge_sort(arr,st,mid,end);
}
int main() {
    int n=7;
    int arr[]={14,18,7,4,28,43,69};
    ms(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    return 0;
}
