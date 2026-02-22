#include <bits/stdc++.h>
using namespace std;

// bool checkpow(int n){
//     return (n>0 && (n & (n-1))==0);
// }

bool checkpow(int n)
{
    if (n <= 0)
        return false;

    int count = __builtin_popcount(n);

    if (count == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cin >> n;

    cout << checkpow(n) << endl;

    return 0;
}