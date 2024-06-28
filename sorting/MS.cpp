#include<iostream>
using namespace std;

void Merge(int *a,int low,int mid,int high)
{
    int i=low,k=low,j=mid+1;
    int c[100];
    cout<<"low "<<low<<endl;
    cout<<"mid "<<mid<<endl;
    cout<<"high "<<high<<endl;

    while(i<=mid && j<=high)
    {
        if(a[i]<a[j])
        {
            c[k++]=a[i++];
        }
        else
        {
            c[k++]=a[j++];
        }
    }
    while(i<=mid)
    {
        c[k++]=a[i++];
    }
    while(j<=high)
    {
        c[k++]=a[j++];

    }

    for(int i=0;i<k;i++)
    {
        a[i]=c[i];
    }
    //cout << "array elements after sorting "<<endl;
   // for(int i=0;i<k;i++)
    //{
    //    cout<<a[i]<<" ";
    //}
   // cout<<endl<<endl;
}
void printArray(int *a,int low,int high){
    for(int i=low;i<high;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void mergeSort(int *a,int low,int high)
{
    //cout<<"Array elements are ";
      //  for(int i=low;i<=high;i++)
     //   {
      //      cout<<a[i]<<" ";
      //  }
       // cout<<endl;
       printArray(a,low,high);
    if(low<high)
    {
        int mid=(low+high)/2;

        //cout<<"left half"<<endl;
        mergeSort(a,low,mid);

        //cout<<"right half"<<endl;
        mergeSort(a,mid+1,high);

//cout<<"Merge array "<<endl;
        Merge(a,low,mid,high);
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

    mergeSort(arr,0,n-1);

    cout << "array elements after sorting "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


