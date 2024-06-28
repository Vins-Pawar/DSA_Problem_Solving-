
#include<bits/stdc++.h>
using namespace std;

vector<int>nearestSmallestToLeft(vector<int> a){
    stack<int>s;

    vector<int>ans;
    int n= a.size();

    for(int i=0; i<n; i++){
        if(s.size()==0){
            ans.push_back(-1);
        }
        else{
            while(s.size() > 0 && a[i] <= s.top()){
                s.pop();
            }
            if(s.size()==0) ans.push_back(-1);
            else ans.push_back(s.top());
        }
        s.push(a[i]);
    }
    return ans;
}

int main(){
    vector<int>a={4,5,2,10,8};

    vector<int>ans = nearestSmallestToLeft(a);

    for(int i : ans){
        cout<<i<<" ";
    }
}
