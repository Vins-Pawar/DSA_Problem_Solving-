#include<iostream>
using namespace std;

int reverseNum(int num){
    if(num==0)
        return 0;

    int rem=num%10;
    num=num/10;
    return reverseNum(num)*10 + rem;
}

int main(){
    int num=1234;
    cout<<reverseNum(num);
}
