

#include <bits/stdc++.h>
using namespace std;

int secondLargest(int arr[], int n)
{
    if (n == 0 || n == 1)
    {
        return -1;
    }
    int large = INT_MIN, seclarge = INT_MIN;
    
    for(int i=0;i<n;i++){
        if(arr[i] > large){
            seclarge=large;
            large=arr[i];
        }

        else if(arr[i] > seclarge && arr[i] != large){
            seclarge=arr[i];
        }
    }
    return seclarge;
}
int secondSmallest(int arr[], int n)
{
    if (n == 0 || n == 1)
    {
        return -1;
    }
    int small = INT_MAX, secsmall = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i] < small){
            secsmall=small;
            small=arr[i];
        }

        else if(arr[i] < secsmall && arr[i] != small){
            secsmall=arr[i];
        }
    }
    return secsmall;
}

int main()
{
    int arr[] = {10, 20, 4, 700, 70, 500};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sS = secondSmallest(arr, n);
    int sL = secondLargest(arr, n);
    cout << "Second smallest is " << sS << endl;
    cout << "Second largest is " << sL << endl;
    return 0;
}
