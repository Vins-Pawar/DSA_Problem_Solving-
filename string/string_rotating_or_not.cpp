#include<iostream>
using namespace std;

int main(){
    string a="abc";
    string b="cab";

    a=a+a;

    int j=0,i=0,k=b.size();
    string demo="";
    while(j<a.size()){
       demo+=a[j];

       if(demo.size()<k)
            j++;
       else if(demo.size()==k){
        if(demo==b){
            cout<<"yes";
            break;
        }
        demo.erase(i);
       }
    }

}
