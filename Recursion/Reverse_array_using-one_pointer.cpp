#include <iostream>
using namespace std;
void Reversee(int arr[],int i,int n){
    if(i>=n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    Reversee(arr,i+1,n);
}
int main(){
    int arr[]={1,2,3,4,2};
    int n=sizeof(arr)/sizeof(int);
     for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<endl;
    Reversee(arr,0,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }
    
}