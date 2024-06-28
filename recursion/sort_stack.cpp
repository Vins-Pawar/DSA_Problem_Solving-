#include<bits/stdc++.h>
using namespace std;

void insertElement(stack<int>&s ,int ele){
    if(s.size()==0 || s.top()<=ele){
        s.push(ele);
        return;
    }

    int temp=s.top();
    s.pop();

    insertElement(s,ele);
    s.push(temp);
    return ;
}

void sortStack(stack<int>&s){
    if(s.size()==1)
        return;

    int temp=s.top();
    s.pop();
    sortStack(s);
    insertElement(s,temp);
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
    s.push(1000);

    sortStack(s);

    display(s);
}
