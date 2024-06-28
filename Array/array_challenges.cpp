/*
input--> 10 20  30  40  50
output-->10 50  20  40  30
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the Size of array ";
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int i=0,j=n-1;
    while(i<=j)
    {
        if(i==j)
        {
            cout<<a[i];
        }
        else
        {
            cout<<a[i]<<" "<<a[j]<<" ";
        }
        i++;
        j--;
    }
}
