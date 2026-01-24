#include <bits/stdc++.h>
using namespace std;
int FindMissing(int arr[],int n){
    
    int totalsum=n*(n+1)/2;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    return totalsum-sum;
    
}
int main(){
    int n=5;
    int arr[]={0,1,2,4,5};
    int sizee=sizeof(arr)/sizeof(int);
    cout<<FindMissing(arr,n);
    return 0;
    
}