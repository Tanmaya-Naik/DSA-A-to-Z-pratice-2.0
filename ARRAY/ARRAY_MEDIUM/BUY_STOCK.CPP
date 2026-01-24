                                            //BRUTE FORCE

#include <bits/stdc++.h>
using namespace std;

// int maxProfit(vector<int>& arr){
//     int n=arr.size();
//     int maxpro=0;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[j] > arr[i]){
//                 maxpro=max(arr[j] - arr[i], maxpro);
//             }
//         }
//     }
//     return maxpro;
// }


// int main() {
//     vector<int> arr = {7,1,5,3,6,7,12,15,4};
//     int maxPro = maxProfit(arr);
//     cout << "Max profit is: " << maxPro << endl;
// }



                                            //OPTIMUM

 int maxProfit(vector<int>& arr){
    int n=arr.size();
    int minprice=INT_MAX;
    int maxpro=0;
    for(int i=0;i<n;i++){
        minprice=min(minprice,arr[i]);
        maxpro=max(maxpro,arr[i]-minprice);
    }

    return maxpro;
 }


 int main() {
    vector<int> arr = {7,1,5,3,6,7,12,15,4};
    int maxPro = maxProfit(arr);
    cout << "Max profit is: " << maxPro << endl;
    return 0;
}