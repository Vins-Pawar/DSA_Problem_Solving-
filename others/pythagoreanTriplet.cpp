/*
a^2==b^2+c^2;
*/

#include<iostream>
using namespace std;

int max(int p,int q)
{
    if(p>q)
        return p;
    else
        return q;
}

bool check(int x,int y,int z)
{
    int a=max(x,max(y,z));
    //cout<<"maximum element "<<a<<endl;
    int b,c;
    if(a==x)
    {
        b=y;
        c=z;
    }
    else if(a==y)
    {
        b=z;
        c=x;
    }
    else
    {
        b=x;
        c=y;
    }
    //cout<<"b="<<b<<" c="<<c<<endl;
    return (a*a==b*b+c*c);
}

int main()
{
    int a,b,c;
    cout<<"Enter 3 numbers ";
    cin>>a>>b>>c;

    if(check(a,b,c))
        cout<<"pythagorean triplet"<<endl;
    else
        cout<<"not a pythagorean triplet"<<endl;
}
