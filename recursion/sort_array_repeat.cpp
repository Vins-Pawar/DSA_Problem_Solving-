#include<bits/stdc++.h>
using namespace std;

void insertEle(vector<int>&v,int temp){
    if(v.size()==0 || v[v.size()-1] <= temp){
        v.push_back(temp);
        return;
    }

    int val=v[v.size()-1];
    v.pop_back();

    insertEle(v,temp);

    v.push_back(val);
}

void sort(vector<int> &v){
    if(v.size()==1)
        return;

    int temp=v[v.size()-1];
        v.pop_back();

    sort(v);

    insertEle(v,temp);
}

int main(){
    vector<int>v={100,10,85,6,9,1};
    sort(v);

    for(int i: v){
        cout<<i<<" ";
    }
    cout<<endl;
}
