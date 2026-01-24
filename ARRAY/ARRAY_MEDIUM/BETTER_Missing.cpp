#include <bits/stdc++.h>
using namespace std;
int findMissing(vector<int> arr,int N){
    int hash[N+1]={0};
    for(int i=0;i<N-1;i++){
        hash[arr[i]]++;
        
    }
    for (int j = 1; j <=N; j++)
        {
            if(hash[j]==0){
                return j;
                break;
            }
        }
    return -1;
}
int main(){
    int N = 10;
    vector<int> a = {1,2,3,4,5,6,8,8,10};
    int ans = findMissing(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}