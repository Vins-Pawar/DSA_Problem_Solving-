#include<bits/stdc++.h>
using namespace std;

int checkExceeds(int mid, int n, int m){
	int result = 1;
	for(int i=1; i<=n; i++){
		if(result*mid > m){
			return 0;
		}
		result = result * mid;
	}
	if(result == m){
		return 1;
	}
	return 2;
}

int nthRoot(int n , int m){
	int low = 1;
	int high = m;
	long long mid;

	while(low <= high){
		mid = (low + high)/2;
		 
		if(checkExceeds(mid,n,m)==1)
			return mid;
		else if(checkExceeds(mid,n,m)==2) low = mid + 1;
		else high = mid - 1;
	}
	return -1;
}

int main(){
	int n = 3;
	int m = 28;
	cout<< nthRoot(n,m);
	return 0;
}