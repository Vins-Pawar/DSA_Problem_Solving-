/*

*
**
***
****
*****
****
***
**
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
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<=i;j++)
//        {
//            cout<<"*";
//        }
//        cout<<endl;
//    }
//
//    for(int i=n;i>1;i--)
//    {
//        for(int j=1;j<i;j++)
//            cout<<"*";
//        cout<<endl;
//    }
//}


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5;

    for(int i=1; i<n; i++){
       for(int j=1;j<=i;j++)
        cout<<"*";
       cout<<endl;
    }
    for(int i=2;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}
