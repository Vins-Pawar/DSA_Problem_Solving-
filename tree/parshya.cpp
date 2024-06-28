#include<iostream>
using namespace std;

int main()
{
    int n;
    int x=0;
    cout<<"Enter size ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int mxor=0;
   //
    int result;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            x=x^a[j];
            if(x>mxor)
            {
                 mxor=x;
                 result=j-i+1;
                 cout<<"result="<<result<<"xor="<<x<<endl;
            }
        }
        x=0;
    }
    cout<<result<<" "<<mxor;
}
