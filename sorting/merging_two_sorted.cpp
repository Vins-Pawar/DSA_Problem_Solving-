#include<iostream>
using namespace std;

void mergeArray(int *a,int n,int *b,int m)
{
    int i=0,j=0,k=0,c[n+m];
    //i is a index of a array
    //j is a index of b array
    //k is a index of c array
    // n+m bez combine 2 array into 1

    while(i<n && j<m)
    {//traverse any one of the array entirely

        if(a[i]<b[j])
        {//a array element is greater than b

            //insert in into c
            c[k]=a[i];
            k++;
            i++;
        }
        else
        {//b array element greater than a

            //insert in into c
            c[k]=b[j];
            k++;
            j++;

        }
    }
    while(i<n)
    {
        //if array a contains some element(a not traverse complete) then insert
        //remaining elements on c
        c[k++]=a[i++];
    }

    while(j<m)
    {
        //if array b contains some element(b is not traverse complete) then insert
        //remaining elements on c
        c[k++]=b[j++];
    }
    //display merged elements
    for(int i=0;i<n+m;i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n,m;
    cout<<"Enter the Size of array 1 ";
    cin>>n;

    int a[n];
    cout<<"Enter the array elements(sorted order) ";
    for(int i=0;i<n;i++)
    {
        //element taka
        cin>>a[i];
    }

    cout<<"Enter the Size of array 2 ";
    cin>>m;

    int b[m];
    cout<<"Enter the array elements(sorted order )";
    for(int i=0;i<m;i++)
    {
        //element tak
        cin>>b[i];
    }

    mergeArray(a,n,b,m);

}
