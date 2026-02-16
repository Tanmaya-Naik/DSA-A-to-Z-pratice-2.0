/*  SO BEFORE WRITING ANY CODE FIRST KNOW THE FORMULA TO FIND THIS WITHOUT FORMULA U WILL FACE PROBLEM
    SO TO FIND THE iTH BIT OF ANY NUMBER 
    ---> FIRST U HAVE TO PERFOM LEFT SHIFT OPERATION WITH BINARY VALUE OF 1 LIKE 1>>i and then perform AND OPERATION
    WITH THE NUMBER U WANT TO FIND THE ITH BIT NUMBER SO IF THE RESULT OF AND OPERATION IS ==0 THEN THE ITH BIT IS 0
    AND RESULT IS 1 THEN ITH BIT IS 1
*/

//WE CAN DO IT WITH BOTH LEFT SHIFT OPERATOR AS WELL AS RIGHT SHIFT OPERATOR

#include <bits/stdc++.h>
using namespace std;


void FindithBit(int n,int k){
    int Bitmask=1<<k;

    if((n&Bitmask)==0){
        cout<<"The ith bit is 0"<<endl;
    }
    else{
        cout<<"The ith bit is 1"<<endl;
    }
}
int main(){
    cout<<"Enter the number u want to find ith bit"<<endl;
    int n;
    cin>>n;

    cout<<"Enter the ith bit"<<endl;
    int k;
    cin>>k;

    FindithBit(n,k);

    return 0;
}