#include<iostream>
using namespace std;

int longSubarray(int *arr,int s)
{
    // difference of first 2 elements
    int d=arr[1]-arr[0]; //difference of initial 2 elements
    int cnt=2;  //current count
    int ans=2;  //final count


    for(int j=2;j<s;j++)
    {
        if(arr[j]-arr[j-1]==d)
            cnt++;
            //if the difference of 3rd element onwards is same then increase current count
        else
        {
            d=arr[j]-arr[j-1];
            //update difference
            cnt=2;
            //set initial count =2;
        }
        ans=max(ans,cnt);
        //update the final count value
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
    cout<<longSubarray(arr,s);
}
