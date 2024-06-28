#include<bits/stdc++.h>
using namespace std;
bool ispal(string s){
     map<char,int>mp;
    if(s.size()==2)
        return true;
     for(auto i:s){
        mp[i]++;
     }
     int oddcount=1;
     for(auto i:mp){
        if(i.second%2==1 && oddcount==0){
            return false;
        }
        else if(i.second % 2==1){
            oddcount--;
        }
     }
//     cout<<s<<endl;
    return true;
}
int main(){
vector<string>s;
s.push_back("aabb");
string word="";
for(int i=0;i<s.size();i++){
        int cnt=s[i].size();
    for(int j=0;j<s[i].size()-1;j++){
            word+=s[i][j];
           // cout<<"j "<<word<<endl;
        for(int k=j+1;k<s[i].size();k++){
            word+=s[i][k];
            //cout<<"k "<<word<<endl;
            if(ispal(word)){
                cnt++;
                cout<<word<<endl;
            }
        }
        word="";
    }
    cout<<cnt<<endl;
}
}
