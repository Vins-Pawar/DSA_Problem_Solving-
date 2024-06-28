#include<iostream>
using namespace std;

int main(){
int a[]={1,1,1,2,3,5};
int n=sizeof(a)/sizeof(a[0]);

int i=0,j=0,k=8;
int sum=0,result=-1;
while(j<n){
    sum+=a[j];

    if(sum<k)
        j++;
    else if(sum==k){
        result=max(result,j-i+1);
        i++;
        j++;
    }
    else if(sum>k){
        while(sum >k){
            sum-=a[i];
            i++;
        }
        result=max(result,j-i+1);
    }
}

cout<<result<<endl;
}
