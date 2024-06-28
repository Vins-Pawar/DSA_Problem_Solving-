/*

*********
 *******
  *****
   ***
    *

*/

//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int n;
//    cout<<"enter the number ";
//    cin>>n;
//
//    for(int i=n; i>0; i--)
//    {
//        for(int j=1;j<=2*n-1;j++)
//        {
//            if(j>n-i && j<n+i)
//                cout<<"*";
//            else
//                cout<<" ";
//        }
//        cout<<endl;
//    }
//}

#include<bits/stdc++.h>
using namespace std;

int main(){
int n=5;

for(int i=1;i<=n;i++){
    for(int j=1;j<=2*n-i;j++){
        if(j<i){
            cout<<" ";
        }
        else{
            cout<<"*";
        }
    }
    cout<<endl;
}
}
