#include<iostream>
using namespace std;

int Partition(int *a,int low,int high)
{
    //cout<<"hi ";

    int pivot=a[low];//pivot array cha first element
    int i=low+1; //i start from pivont pasun pudha
    int j=high; //j is last

    cout << "array elements before sorting "<<endl;
    for(int i=0;i<=high;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;


    while(i<=j)
{
         //cout<<"hi ";
    for(i;i<=j;i++){
        //find i th index having array element greater than pivot
            //i th ele of array jar greater aasel pivot peksha swap karaycah j th ele. bribar
        if(a[i]>pivot){
            break;}
    }
    for(j;j>=i;j--){
        //find j th index having array element less than pivot
        //j th element of array lahan aaasel pivot peksha swap karaycha i th element brobar
        if(a[j]<=pivot){
            break;
        }
    }

    if(i<j){
        //i th index j peksha small aasel tarcha swap kar
        //nahi tar pivot aani j swap karaycha
        swap(a[i],a[j]);
    }
}

    if(j<i){
        //pivot aani j th element swap karaych
        swap(a[low],a[j]);
    }
    //fixed position of pivot index
    return j;
}

void QuickSort(int *a,int low,int high)
{
    //cout<<"hi ";
    int partitionIndex;
    if(low<high)
    {

       partitionIndex=Partition(a,low,high);

       //left sort kara
        QuickSort(a,low,partitionIndex-1);

        //right sort kara
        QuickSort(a,partitionIndex+1,high);
    }
}
int main()
{
    int n=5;
   // cout<<"Enter the size of array ";
    //cin>>n;

    int arr[]={10,2,20,3,10};
    //cout<<"Enter the Array elements "<<endl;
   // for(int i=0;i<n;i++){
    //    cin>>arr[i];
    //}

    QuickSort(arr,0,n-1);

    cout << "array elements after sorting "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
