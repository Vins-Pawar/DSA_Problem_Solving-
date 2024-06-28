#include<bits/stdc++.h>
using namespace std;

void removeElement(stack<int>&s,int k){
    if(k==1){
        s.pop();
        return ;
    }

    int temp=s.top();
    s.pop();

    removeElement(s,--k);
    s.push(temp);
}

void deleteMiddleElement(stack<int>&s){
    int k=(s.size()/2)+1;

    removeElement(s,k);
}

void display(stack<int>s){
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}


int main(){
    stack<int>s;
    s.push(100);
    s.push(10);
    s.push(1);
    s.push(50);
    s.push(5);
//s.push(1000);

    deleteMiddleElement(s);

    display(s);
}
