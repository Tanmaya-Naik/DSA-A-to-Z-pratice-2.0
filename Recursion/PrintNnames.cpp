#include <bits/stdc++.h>
using namespace std;
void printname(string name,int N,int i){
    if(i==N){
        return;
    }
    cout<<name<<endl;
    printname(name,N,i+1);
}

int main(){
    string name="Tanubaby";
    int N=18;
    printname(name,N,0);
    return 0;
}