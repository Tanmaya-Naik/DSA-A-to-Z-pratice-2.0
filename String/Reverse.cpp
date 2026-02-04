#include <bits/stdc++.h>
using namespace std;

// APPROACH BRUTE FORCE FIRST ITERATE AND STORE ALL THE WORD OF THE STRING IN A VECTOR THEN REVERSE THE VECTOR AND ITERATE THROUGH VECTOR AND STORE THE STRING IN RESULT

string reverseSTR(string &str)
{
    vector<string> words;
    string word = "";

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != ' ')
        {
            word += str[i];
        }
        else if (!word.empty())
        {
            words.push_back(word);
            word = "";
        }
    }

    if (!word.empty())
    { // last word
        words.push_back(word);
    }

    reverse(words.begin(), words.end());
    string result = "";

    for (int i = 0; i < words.size(); i++)
    {
        result += words[i];
        if (i < words.size() - 1)
            result += " ";
    }

    return result;
}

string optimalReverse(string &str)
{
    string result = "";
    int i = str.size() - 1;
    while (i >= 0)
    {
        while (i >= 0 && str[i] == ' ')
        {
            i--;
        }
        if (i < 0)
            break;

        int end = i;

        while (i >= 0 && str[i] != ' ')
        {
            i--;
        } // when encounter a non space character

        // lets extract the string from i to end-i
        string word = "";
        word += str.substr(i + 1, end - i); // this give that word

        if (!word.empty())
{
    if (!result.empty())
        result += " ";
    result += word;
}

    }
    return result;
}

int main()
{
    string str = "   he is  ";
    string str2 = reverseSTR(str);
    cout << str2 << endl;
    cout<<str2.size()<<endl;
    
    string str3 = optimalReverse(str);
    cout << str3 << endl;
    cout<<str3.size();

    return 0;
}