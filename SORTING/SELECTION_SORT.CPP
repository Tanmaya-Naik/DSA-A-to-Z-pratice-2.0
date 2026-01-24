#include <bits/stdc++.h>
using namespace std;

void Selection_sort(int arr[],int n){
    for (int  i = 0; i <=n-2; i++)
    {
        int mini=i;
        for (int j = i; j <=n-1; j++)
        {
            if(arr[j] < arr[mini]){
                mini=j;
            }
        }
        int temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
        
    }
    
}

void Bubble_Sort(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main() {
    int n=7;
    int arr[]={14,18,7,4,28,43,69};
    // Selection_sort(arr,n);
    Bubble_Sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    return 0;
}