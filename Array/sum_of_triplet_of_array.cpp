#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n=5;
    int ele=2;
    int a[5]={10,2,3,0,0};

    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    for(int i=0;i<n-2;i++)
    {
        //cout<<"hi ";
        int j=i+1;
        int k=n-1;

        while(j<k)
        {
            //cout<<"hi";
            int sum=a[i]+a[j]+a[k];
            if(sum==ele)
            {
                cout<<"triplet is found "<<endl;
                cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;;
                return 0;
            }
            else if(sum>ele)
            {
                k--;
            }
            else
                j++;
        }
    }
    cout<<"Triplet is not found"<<endl;;
}
