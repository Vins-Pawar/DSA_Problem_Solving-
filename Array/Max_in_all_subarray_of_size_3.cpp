#include<iostream>
using namespace std;

int main(){
int a[]={1,3,-1,-3,5,3,6,7};
int n=sizeof(a)/sizeof(a[0]);

int i=0,j=0,k=3;
queue <int>maxele;
vector<int>r;

while(j<n)
    while(maxele.size()>0 && maxele.back()<a[j]){
        maxele.pop();
    }
    maxele.push(a[j]);
    if(j-i+1<k)
        j++;
    else if(j-i+1==k){
        r.push_back(maxele.front());

        if(maxele.front()==a[i]){
            maxele.pop_front();
        }
    }

}
