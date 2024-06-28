#include<bits/stdc++.h>
using namespace std;

int upperBound(vector<int> arr , int target){
	int low = 0;
	int high = arr.size()-1;
	int ans = -1;

	while(low <= high){
		int mid = low + (high - low)/2;
		
		if(arr[mid] > target){
			ans = mid;
			high = mid -1;
		}
		else{
			low = mid + 1;
		}
	}
	return ans;
}

int main(){
	vector<int> arr = {10,20,30,40,50,60,70};
	cout << upperBound(arr,20);
}