#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the Size of array ";
    cin>>n;
    int a[n];

    cout<<"Enter the Array elements ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int i=0,j=n-1;
    while(i<j)
    {
        if(a[i]>0 && a[j]<0)
        {
            swap(a[i],a[j]);
            i++;
            j--;
        }
        else if(a[i]<0 && a[j]>0)
        {
            i++;
            j--;
        }
        else if(a[i]<0)
            i++;
        else/*if(a[j]>0)*/
            j--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
