#include <bits/stdc++.h>
using namespace std;

string convert2Binary(int num){
    string ans="";
    while(num>0){
        ans+= num%2==0 ? '0' : '1';
        num/=2;
    }
    reverse(ans.begin(),ans.end());
    return ans;
    
}

int main(){
    int n;
    cin>>n;
     string finalanas= convert2Binary(n);
     cout<<finalanas<<endl;

     return 0;
}