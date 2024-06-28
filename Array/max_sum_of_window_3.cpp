#include<iostream>
using namespace std;

int main(){
int a[]={2,5,1,8,2,9,1};
int n=sizeof(a)/sizeof(a[0]);

int i=0,j=0,k=4,sum=0,maxsum=0;

while(j<n){
    sum+=a[j];

    if(j-i+1<k)
        j++;
    else if(j-i+1==k){
        maxsum=max(sum,maxsum);
        sum=sum-a[i];
        i++;
        j++;
    }
}
cout<<maxsum<<endl;
}
