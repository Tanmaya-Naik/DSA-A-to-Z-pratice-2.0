
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter the number u want to find ith bit" << endl;
    int n;
    cin >> n;

    cout << "Enter the ith bit" << endl;
    int k;
    cin >> k;

    int bitmask=~(1<<k);
    int newN=(n&bitmask);
    cout <<"After setting the ith bit the new Value is "<< newN << endl;

    return 0;
}