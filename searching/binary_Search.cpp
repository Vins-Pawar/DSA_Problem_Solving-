#include<iostream>
using namespace std;

void BinarySearch(int *arr,int n,int ele){
    int s=0,e=n-1;

    while(s<=e){
        int mid=s+(e-s)/2;

        if(arr[mid]==ele){
            cout<<"Element found at "<<mid<<" index"<<endl;
            return;
        }
        else if(arr[mid]>ele){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    cout<<"Element not found "<<endl;
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
    BinarySearch(arr,n,ele);
}
