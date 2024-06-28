#include<iostream>
using namespace std;

int main()
{
    int a[5],ele;
    cout<<"Enter the Element ";
    cin>>ele;

    cout<<"Enter the array elements ";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }

    int i=0,j=0,sum=0;
    while(i<5)
    {
        sum=sum+a[j];
        if(sum==ele)
        {
            cout<<"sum "<<sum<<endl;
            cout<<i<<" & "<<j<<endl;
            break;
        }

        else if(sum>ele)
        {
            i++;
            j=i;
            sum=0;
        }
        else
        {
            j++;
        }

    }
}
