#include<bits/stdc++.h>
using namespace std;
int main(){
        string str="I Love India";
        stringstream s(str);
        string word;
        string result;
        while(s>>word){
//            cout<<word<<" ";
            result=word+" "+result;
        }
        cout<<result<<endl;
}
