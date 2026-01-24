//This is the most optimum way to find the union of two sorted array
//Here we use TWO POINTER TECHNIQUE -----REMEMBER THIS-------
#include <bits/stdc++.h>
using namespace std;
vector<int> findUnion(int arr1[],int arr2[],int n,int m){
    vector<int> UnionAns;
    int i=0;
    int j=0;
    while (i<n && j<m)
    {
        if(arr1[i]<arr2[j]){
            if(UnionAns.size()==0 || UnionAns.back()!=arr1[i]){
                UnionAns.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(UnionAns.size()==0 || UnionAns.back()!=arr2[j]){
                UnionAns.push_back(arr2[j]);
            }
            j++;
        }
    }

    while (i<n)
    {
        if(UnionAns.size()==0 || UnionAns.back()!=arr1[i]);{
            UnionAns.push_back(arr1[i]);
        }
        i++;
    }

    while(j<m)
    {
        if(UnionAns.size()==0 || UnionAns.back()!=arr2[j]){
            UnionAns.push_back(arr2[j]);
        }
        j++;
    }

    return UnionAns;
    
    
}
int main(){
    int arr1[]={1,2,2,3,3,4,5,6,7,7};
    int arr2[]={9,9,10,14,14,18,18,20,22};
    int n=sizeof(arr1)/sizeof(int);
    int m=sizeof(arr2)/sizeof(int);

    vector<int> UNionans=findUnion(arr1,arr2,n,m);
    for(auto &it:UNionans){
        cout<<it<<",";
    } 

    return 0;

}