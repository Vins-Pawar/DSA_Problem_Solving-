#include<iostream>
using namespace std;

int reversearr(int a[],int start,int last)
{
    if(start>last){
         return 0;
    }
    else
    {
         int temp;
        swap(a[start],a[last]);
        //temp=a[start];
        //a[start]=a[last];
        //a[last]=temp;
         reversearr(a,++start,--last);
    }
}

int main()
{
    int a[100];
    int len;
    cout<<"Enter the length of array ";
    cin>>len;

    for(int i=0;i<len;i++)
    {
        cin>>a[i];
    }

    reversearr(a,0,len-1);

    for(int i=0;i<len;i++)
    {
        cout<<a[i]<<" ";
    }
}
