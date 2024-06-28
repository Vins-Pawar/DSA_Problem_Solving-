#include<bits/stdc++.h>

using namespace std;

vector<int> nextLargestElements(vector<int>a){
    stack<int>s;
    vector<int>ans;
    int n = a.size();
    for(int i=n-1;i>=0;i--){
        if(s.size()==0){
            ans.push_back(-1);
        }
        else{
            while(s.size()>0 && a[i] >= s.top()){
                s.pop();
            }
            if(s.size()==0) ans.push_back(-1);
            else ans.push_back(s.top());
        }
        s.push(a[i]);
    }
    return ans;
}

void display(vector<int>a){
    for(int i=a.size()-1;i>=0;i--){
        cout<<a[i]<<" ";
    }
}

int main(){
    vector<int> a={1,3,0,0,1,2,4};

    vector<int> ans = nextLargestElements(a);

    display(ans);

}

/*
    Start from a Last element of a array
    check if stack is empty or a not if it is empty push -1
    if stack is not empty check stack top element is grater than array index element if yes push it if ans
    if top element is less than array index pop elements until stack is empty && found grater element than array index
    if stack is empty push -1 ans else push top element in an
*/
