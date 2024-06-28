#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{
    string s="This is Vins v";
    unordered_map<char,int> m;

    for(int i=0;i<s.length();i++)
    {
        if(m.find(s[i])!=m.end())
        {
            m[s[i]]++;
        }
        else{
            m[s[i]]=1;
        }
    }
    for(auto pair:m)
    {
        cout<<pair.first<<" "<<pair.second<<endl;
    }
}
