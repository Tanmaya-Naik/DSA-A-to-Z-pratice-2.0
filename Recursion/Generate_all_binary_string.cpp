#include <bits/stdc++.h>
using namespace std;

void helper(int n, string &curr, vector<string> &result, char previous)
{
    if (curr.length() == n)
    {
        result.push_back(curr);
        return;
    }

    // push 0
    curr.push_back('0');
    helper(n, curr, result, '0');
    curr.pop_back();

    // push 1 if last is not 1
    if (previous != '1')
    {
        curr.push_back('1');
        helper(n, curr, result, '1');
        curr.pop_back();
    }
}

int main()
{
    string curr = "";
    vector<string> result;
    int n = 3;
    helper(n, curr, result, '#');

    for (auto &it : result)
    {
        cout << it << " ";
    }

    return 0;
}