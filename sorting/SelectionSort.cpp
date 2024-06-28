#include<iostream>
using namespace std;

void SelectionSort(int *arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
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

    SelectionSort(arr,n);

    cout << "array elements after sorting "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
