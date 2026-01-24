#include <iostream>
using namespace std;
void MoveToLast(int arr[],int n){
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1){
        return;
    }

    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }

}
int main(){
    int arr[]={0,5,0,0,3,0,0,2,0,1};
    int n=sizeof(arr)/sizeof(int);
    MoveToLast(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }

    return 0;

}