#include<iostream>
using namespace std;

int RecordBreakingDay(int *arr,int n)
{
    int ans=0;
    int PriviousDay=INT_MIN;

    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>PriviousDay && arr[i]>arr[i+1])
        {
            //cout<<arr[i]<<endl;
            ans++;
            PriviousDay=arr[i];
        }
    }
    return ans;
}

int main()
{
    int s;
    cout<<"Enter the size of array ";
    cin>>s;

    int arr[s];
    cout<<"Enter the array elements "<<endl;
    for(int i=0; i<s; i++)
    {
        cin>>arr[i];
    }

    cout<<RecordBreakingDay(arr,s);
}
