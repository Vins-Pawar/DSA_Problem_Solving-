#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
   // cin>>n;
   int s=3;
    int a[5]{1,2,3,7,5};

//    int i=0,j=0;
//    int sum=0;
//    while(j<n && sum+a[j]<=s){
//        sum+=a[j];
//        j++;
//    }
//    if(sum==s){
//        cout<<i+1<<" "<<j<<endl;
//    }
//    while(j<n){
//         if(sum==s){
//            cout<<i+1<<" "<<j<<endl;
//         }
//         sum+=a[j];
//         while(sum>s){
//            sum-=a[i];
//            i++;
//         }
//         j++;
//    }

    int i=0,j=0,sum=0;

    while(j<n){
        sum+=a[j];
        if(sum<s){
            j++;
        }
        else if(sum==s){
            cout<<i+1<<" "<<j+1<<endl;
            j++;
        }
        else{
            while(sum>s){
                sum-=a[i];
                i++;
            }
            if(sum==s){
                cout<<i+1<<" "<<j+1<<endl;
            }
            j++;
        }
    }
}
