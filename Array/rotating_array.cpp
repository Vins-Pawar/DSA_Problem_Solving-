#include<iostream>
#include<vector>
using namespace std;

void Rotate(vector<int>& nums, int k) {
    /* wrong approch
        vector<int> a(nums);
        int insertAt;
        for(int i=0;i<a.size();i++)
        {
            cout<<"i+k="<<i+k<<endl;
            cout<<"a.size()-1="<<a.size()-1<<endl;
            if((i+k) > (a.size()-1))
            {
                insertAt=((i-1+k)-(a.size()-1));
                cout<<"index for "<<i<<" insertAt "<<insertAt<<endl;
            }

            else
                insertAt=i+k;
            //cout<<"index for "<<i<<" insertAt "<<insertAt<<endl;
            nums[insertAt]=a[i];
        }
        */
        vector<int> temp(nums);

        for(int i=0;i<temp.size();i++)
        {
            nums[(i+k)%nums.size()]=temp[i];
        }

        int temp[n];
        for(int i=0;i<n;i++)
        {
            temp[(i+k)%n]=arr[i];
        }
        for(int i=0;i<n;i++)
        {
            cout<<temp[i]<<" ";
        }
    }

int main()
{
    vector<int> nums={1,2,3,4,5};
    int k=;
    Rotate(nums,k);
    for(int i=0;i<nums.size();i++)
    {

        cout<<nums[i]<<" ";
    }
    cout<<endl;
}
