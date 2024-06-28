#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>arr,int target){
	int low = 0;
	int high = arr.size()-1;
	int mid;
	int ans = arr.size();

	while(low <= high){
		mid = low + (high - low)/2;
		if(arr[mid] >= target){
			ans = mid;
			high = mid - 1;
		}
		else{
			low = mid + 1;
		}
	}
	return ans;
}

int main(){
	vector<int> arr = {10,20,54,60,96,155,199,200};
	cout<<lowerBound(arr,201);
}