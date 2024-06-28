#include<iostream>
using namespace std;

void InsertionSort(int *arr,int n)
{
    for(int i=1;i<n;i++)
    {
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--)
        {
            //cout<<" hi"<<endl;
            if(arr[j]>temp)
            {
                //swap
                arr[j+1]=arr[j];
            }
            else
                break;
        }
        arr[j+1]=temp;
    }
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

    InsertionSort(arr,n);

    cout << "array elements after sorting "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
