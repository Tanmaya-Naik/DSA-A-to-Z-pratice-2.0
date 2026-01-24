#include <bits/stdc++.h>
using namespace std;

vector<int> findUNION(int arr1[], int arr2[], int sz1, int sz2)
{
    int i = 0;
    int j = 0;
    vector<int> UNION;

    while (i < sz1 && j < sz2)
    {
        if (arr1[i] <= arr2[j])
        {
            if (UNION.size() == 0 || UNION.back() != arr1[i])
            {
                UNION.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (UNION.size() == 0 || UNION.back() != arr2[j])
            {
                UNION.push_back(arr2[j]);
            }
            j++;
        }
    }
    while (i < sz1) // IF any element left in arr1
    {
        if (UNION.back() != arr1[i])
            UNION.push_back(arr1[i]);
        i++;
    }
    while (j < sz2) // IF any element left in arr1
    {
        if (UNION.back() != arr2[j])
            UNION.push_back(arr2[j]);
        j++;
    }

    return UNION;
}

// vector<int> findUNION(int arr1[],int arr2[],int sz1,int sz2){
//     map<int,int> freq;

//     vector<int> UNIONN;
//     for(int i=0;i < sz1;i++){
//         freq[arr1[i]]++;
//     }
//     for (int j = 0; j < sz2; j++)
//     {
//        freq[arr2[j]]++;
//     }
//     for(auto &it:freq){
//         UNIONN.push_back(it.first);

//     }

//     return UNIONN;

// }
int main()
{
    int n = 10;
    int m = 7;
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 14, 18};
    vector<int> UNION = findUNION(arr1, arr2, n, m);
    for (auto &val : UNION)
    {
        cout << val << ",";
    }
    return 0;
}