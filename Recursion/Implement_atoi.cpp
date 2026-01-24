#include <bits/stdc++.h>
using namespace std;

const int INT_MIN_VAL = -2147483648;
const int INT_MAX_VAL = 2147483647;

int myhelper(string &str, int i, long long num, int sign)
{

    // base case
    if (i > str.size() || !isdigit(str[i]))
    {

        return (int)(sign * num);
    }

    num = num * 10 + (str[i] - '0');

    if (sign * num <= INT_MIN_VAL)
        return INT_MIN_VAL;
    if (sign * num >= INT_MAX_VAL)
        return INT_MAX_VAL;

    return myhelper(str, i + 1, num, sign);
}

int myatoi(string str, int i = 0)
{
    while (i < str.size() && str[i] == ' ')
        i++;

    // sign
    int sign = 1;
    if (i < str.size() && (str[i] == '-' || str[i] == '+'))
    {
        sign = (str[i] == '-') ? -1 : 1;
        i++;
    }

    return myhelper(str, i, 0, sign);
}

int main()
{
    string str = "      -6969";

    cout << myatoi(str) << endl;
    return 0;
}