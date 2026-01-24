#include <bits/stdc++.h>
using namespace std;

int partition(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while (arr[i] <= pivot && i<=high-1)
        {
            i++;
        }
        while (arr[j] > pivot && j >= low+1)
        {
            j--;
        }

       if(i < j)  swap(arr[i],arr[j]);
        
    }
    swap(arr[low],arr[j]);
    return j;
}

void qs(int arr[],int low,int high){
    if(low<high){
        int partidx=partition(arr,low,high);
        qs(arr,low,partidx-1);
        qs(arr,partidx+1,high);
    }
}

int main() {
    int n=8;
    int arr[]={12,4,7,5,23,18,3,4};
    qs(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<",";
    }
    return 0;

}