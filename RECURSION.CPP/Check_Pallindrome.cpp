// #include <string>
// #include <iostream>
// using namespace std;

// bool check(int i,string &str){
//    if(i>=str.size()/2){
//     return true;
//    }
//    if(str[i]!=str[str.size()-i-1]){
//     return false;
//    }
//    check(i+1,str);

// }
// int main(){
//     string s={"11211"};
//     cout<<check(0,s);
//     return 0;

// }

#include <bits/stdc++.h>
using namespace std;

bool check(string &str, int i)
{
    if (i >= str.size() / 2)
    {
        return true;
    }

    if (str[i] != str[str.size() - i - 1])
    {
        return false;
    }
     check(str, i + 1);
}

int main()
{
    string num = {"121"};
    cout << check(num, 0);
    return 0;
}