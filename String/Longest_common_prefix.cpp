#include <bits/stdc++.h>
using namespace std;

string commonPrefix(vector<string> &str){
    sort(str.begin(),str.end());
    int n=str.size()-1;
    string minstr=str[0];
    string maxstr=str[n];
    string ans="";

    for(int i=0;i<minstr.size();i++){
      int len = min(minstr.size(), maxstr.size());
for(int i = 0; i < len; i++){
    if(minstr[i] == maxstr[i]){
        ans += minstr[i];
    } 
    else if(minstr[i] != maxstr[i]){
        return ans;
    }
}

    }

    return ans;
}
int main(){
    vector<string> str = {"flower","flow","flight"};
    cout<<commonPrefix(str);
    return 0;

}