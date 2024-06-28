#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    while(b!=0)
    {
        //cout<<"a= "<<a<<" b= "<<b<<endl;
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

int main()
{
    int num1,num2;
    cout<<"Enter no 1 ";
    cin>>num1;

    cout<<"Enter no 2 ";
    cin>>num2;

    cout<<"\n"<<gcd(num1,num2);
}
