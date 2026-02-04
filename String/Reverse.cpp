#include <bits/stdc++.h>
using namespace std;


//APPROACH BRUTE FORCE FIRST ITERATE AND STORE ALL THE WORD OF THE STRING IN A VECTOR THEN REVERSE THE VECTOR AND ITERATE THROUGH VECTOR AND STORE THE STRING IN RESULT

string  reverseSTR(string &str){
    vector<string> words;
    string word="";

    for(int i=0;i<str.size();i++){
        if(str[i]!=' '){
            word+=str[i];
        }
        else if(!word.empty()){
            words.push_back(word);
            word="";
        }
    }

    if(!word.empty()){ //last word
        words.push_back(word);
    }

    reverse(words.begin(),words.end());
    string result="";

    for(int i=0;i<words.size();i++){
        result+=words[i];
        if(i<words.size()-1) result+=" ";
    }

    return result;


}

int main(){
    string str="   i am tanmaya and who are u";
    string str2=reverseSTR(str);
    cout<<str2<<endl;
    return 0;

}