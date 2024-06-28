#include<bits/stdc++.h>
using namespace std;

void insertarr(vector<int>&v,int temp){
    if(v.size()==0 || v[v.size()-1]<=temp){
        v.push_back(temp);
        return;
    }
    int val=v[v.size()-1];
    v.pop_back();

    insertarr(v,temp);

    v.push_back(val);

    return ;

}

void sortarr(vector<int> &v){
    if(v.size()==1)
        return;

    int temp=v[v.size()-1];
    v.pop_back();

    sortarr(v);

    insertarr(v,temp);
}

int main(){
    vector<int>v={1,5,0};
    sortarr(v);

    for(int i: v){
        cout<<i<<" ";
    }
    cout<<endl;
}
