//BEFORE WRITING ANY CODE U HAVE TO KNOW THE FORMULA FOR IT
//SO BITMASK MEANS THE BINARY OF 1 IN 8BITS=00000001 SO IFFF
//IF WE PERFORM AND OPERATION BETWEEN THE NUMBER WE WANT TO CHECK EVEN ODD IF WE GOT 0 
//AFTER PERFOMING AND OPERATION THEN IT IS A EVEN  NUMBER AND WE GOT A ANYTHING RATHER THAN 0 IT IS A ODD NUMBER

#include <bits/stdc++.h>
using namespace std;


void CheckEvenOdd(int n){
     
    if(n==0){
        cout<<"You enter 0 which can be either even or odd so invalid num!!!!"<<endl;
        return;
    }
    if((n&1)==0){
        cout<<"The given number is even"<<endl;
    }
    else{
        cout<<"The enter number is odd"<<endl;
    }
}
int main(){
    cout<<"Enter the number u want to check even or odd"<<endl;
    int n;
    cin>>n;

    CheckEvenOdd(n);

    return 0;
}