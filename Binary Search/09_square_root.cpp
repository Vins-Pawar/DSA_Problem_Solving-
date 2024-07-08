#include<bits/stdc++.h>
using namespace std;

int squareRoot(int num){
	int low = 1;
	int high = num;
	int mid;
	int ans = 0;
	while(low <= high){
		mid = (low + high) /2;
		if(mid * mid <= num){
			ans = mid;
			low = mid + 1;	
		}
		else{
			high = mid - 1;
		}
	}
	return ans;
}

int main(){
	int num = 30;
	cout<<squareRoot(num);
	return 0;
}