#include<iostream>
using namespace std;

void BubbleSort(int *arr,int n)
{
   //for(int i=0;i<n-1;i++)
    for(int i=1;i<n;i++)
    {
        bool isSorted=true;
      //for(int j=0;j<n-1-i;j++)
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                //swapping
                //cout<<"hi";
                swap(arr[j],arr[j+1]);
                isSorted=false;
            }
        }
        if(isSorted)
            break;
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

    BubbleSort(arr,n);

    cout << "array elements after sorting "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
