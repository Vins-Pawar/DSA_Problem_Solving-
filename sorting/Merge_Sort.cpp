#include<iostream>
using namespace std;

void Merge(int *arr,int low,int mid,int high)
{
    //cout<<"hi";
    int i,j,k,b[100];
    i=low;
    k=low;
    j=mid+1;

    while(i<=mid && j<=high)
    {
        if(arr[i]<arr[j])
        {
            b[k]=arr[i];
            i++;
            k++;
        }
        else{
            b[k]=arr[j];
            j++;k++;
        }
    }
    while(i<=mid)
    {
        b[k]=arr[i];
        i++;k++;
    }
    while(j<=high)
    {
        b[k]=arr[j];
        j++;k++;
    }
    for(int z=0;z<k;z++)
    {
        arr[z]=b[z];
    }
}

void MergeSort(int *arr,int low,int high)
{
        //cout<<"hi";
    if(low<high)
    {
        int mid=(low+high)/2;
        MergeSort(arr,low,mid);
        MergeSort(arr,mid+1,high);
        Merge(arr,low,mid,high);
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

    MergeSort(arr,0,n-1);

    cout << "array elements after sorting "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

