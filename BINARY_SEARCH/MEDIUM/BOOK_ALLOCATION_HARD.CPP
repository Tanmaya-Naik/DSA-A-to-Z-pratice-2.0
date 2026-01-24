#include <bits/stdc++.h>
using namespace std;

int countStudent(vector<int>& arr,int page){
    int n=arr.size();
    int student=1;
    long long pageStudent=0;
    for(int i=0;i<n;i++){
        if(pageStudent+arr[i] <= page){
            pageStudent+=arr[i];

        }
        else{
            student++;
            pageStudent=arr[i];
        }
    }

    return student;


}

int findPages(vector<int>& arr, int n, int m){
    if(m > n) return -1;

    int low=*max_element(arr.begin(),arr.end());
    int high=accumulate(arr.begin(),arr.end(),0);

    for(int page=low;page<=high;page++){
        if(countStudent(arr,page)==m){
            return page;
        } 
    }
    return low;

}
int main()
{
    vector<int> arr = {25, 46, 28, 49, 24};
    int n = 5;
    int m = 4;
    int ans = findPages(arr, n, m);
    cout << "The answer is: " << ans << "\n";
    return 0;
}
