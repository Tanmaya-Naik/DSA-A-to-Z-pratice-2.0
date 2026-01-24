#include <bits/stdc++.h>
using namespace std;
int findmissing(int arr[],int n,int N){
for (int i = 1; i <= N; i++)
{
    int flag=0;

    for (int j = 0; j <n ; j++)
    {
        if(arr[j]==i){
            flag=1;
            break;
        }
    }
    if(flag==0){
        return i;
    }
    
}
return -1;


}
int main(){
    int N=10;
    int arr[]={1,2,3,4,5,6,7,10,8};
    int n=sizeof(arr)/sizeof(int);
    cout<<findmissing(arr,n,N);
    return 0;

}