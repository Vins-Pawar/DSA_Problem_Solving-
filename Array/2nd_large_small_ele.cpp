#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={1,2,4,7,7,5};
    int l1=-1,l2=-1;
    int s1=199999,s2=1999999;
    for(int i=0;i<6;i++){
        if(a[i]>l1){
            l2=l1;
            l1=a[i];
        }
        else if(a[i]>l2&&a[i]!=l1){
            l2=a[i];
        }

        if(a[i]<s1){
            s2=s1;
            s1=a[i];
        }
        else if(s2>a[i] && a[i]!=s1){
            s2=a[i];
        }
    }
    cout<<l1<<" "<<l2<<endl;
    cout<<s1<<" "<<s2<<endl;
}
