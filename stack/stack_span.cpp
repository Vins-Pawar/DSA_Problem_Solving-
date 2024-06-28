#include<bits/stdc++.h>

using namespace std;

vector<int>stackSpan(vector<int> a){

    stack<pair<int,int>>s;
    vector<int>ans;
    int n=a.size();
    for(int i=0;i<n;i++){
       if(s.size()==0){
        ans.push_back(-1);
       }
       else{
        while(s.size()>0 && s.top().first <= a[i]){
            s.pop();
        }
        if(s.size()==0)ans.push_back(-1);
        else ans.push_back(s.top().second);
       }
       s.push({a[i],i});
    }
    return ans;
}

int main(){

    vector<int>a={100,80,60,70,60,75,85};

    vector<int>ans = stackSpan(a);

    for(int i : ans){
        cout<<i<<" ";
    }

}
