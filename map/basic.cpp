#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<string,int>a;

    a["vins"]=21;
    a["harsh"]=22;
    a["ram"]=21;

    //access values
    cout<<"Vins age "<<a["vins"]<<endl;

    // Check if a key exists
    //cout<<a.find("ram")<<endl;
    if(a.find("ram")!=a.end())
    {
        cout<<"rams age "<<a["ram"]<<endl;
    }

    auto x=a.find("ram");
    if(x!=a.end())
    {
        cout<<x->first<<" age is "<<x->second<<endl;
    }

    //erase the key value pair
    a.erase("ram");

    //size of map
    int size=a.size();
    cout<<"Sixe of map "<<size<<endl;

    //check if map is empty or not
    if(a.empty())
    {
        cout<<"map is empty"<<endl;
    }
    else{
        cout<<"map is not empty"<<endl;
    }
}
