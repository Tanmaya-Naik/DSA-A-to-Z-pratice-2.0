
#include <bits/stdc++.h>
using namespace std;

int subarraysWithXorK(vector<int> &a, int k) {
    int n=a.size();
    int cnt=0;

    for(int i=0;i<n;i++){

        for (int j = 0; j < n; j++)
        {
            int Xor=0;
            for(int l=i;l< j;l++){
                Xor=Xor ^ a[l];
            }
            if(Xor == k){
                cnt++;
            }
        } 
    }
    return cnt+1;
}
int main()
{
    vector<int> a = {5, 6, 7, 8, 9};
    int k = 5;
    int ans = subarraysWithXorK(a, k);
    cout << "The number of subarrays with XOR k is: "
         << ans << "\n";
    return 0;
}
