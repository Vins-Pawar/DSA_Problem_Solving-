#include<iostream>
using namespace std;

int BinarySearch(int *arr,int s,int e,int ele){

        int mid=s+(e-s)/2;

        if(arr[mid]==ele){
            //cout<<"Element found at "<<mid<<" index"<<endl;
            return mid;
        }
        else if(s>e)
            return -1;
        else if(arr[mid]>ele){
            BinarySearch(arr,0,mid-1,ele);
        }
        else{
            BinarySearch(arr,mid+1,e,ele);
        }
    // cout<<"Element not found "<<endl;
}

int main()
{
    int n,ele;
    cout<<"Enter the size of array ";
    cin>>n;

    int arr[n];
    cout<<"Enter the Array elements "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter the element to search ";
    cin>>ele;
    cout<<BinarySearch(arr,0,n-1,ele);
}

