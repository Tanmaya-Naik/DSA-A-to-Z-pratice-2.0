#include <bits/stdc++.h>
using namespace std;
void insert(stack<int> &s,int temp){
    if(s.empty() || s.top() < temp){
        s.push(temp);
        return;
    }
    else{
        int val=s.top();
        s.pop();

        insert(s,temp);
        s.push(val); //atlast again push it

    }
}
void sortstack(stack<int> &s){
    if(!s.empty()){
        int temp=s.top();
        s.pop();

        sortstack(s);

        insert(s,temp);
    }
}

int main(){
    stack<int> s;
    s.push(3);
    s.push(13);
    s.push(33);
    s.push(2);
    s.push(23);
    s.push(32);

    sortstack(s);


     // Print the sorted stack
    cout << "Sorted stack (descending order): ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;

}