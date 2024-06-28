/*
given an array
input-->  1 0 5 4 6 8
output--> 1 1 5 5 6 8

input-->  0 5 2 3 8 4 1
output--> 0 5 5 5 8 8 8
*/

#include<iostream>
using namespace std;

void maxTilli(int *arr,int s)
{
    int maxno=INT_MIN;
    for(int i=0;i<s;i++)
    {
        if(arr[i]>maxno)
        {
            maxno=arr[i];
        }
        else
        {
            arr[i]=maxno;
        }
    }
}

int main()
{
    int s;
    cout<<"Enter the size of array ";
    cin>>s;

    int arr[s];
    cout<<"Enter the array elements "<<endl;
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
    }
    maxTilli(arr,s);

    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
