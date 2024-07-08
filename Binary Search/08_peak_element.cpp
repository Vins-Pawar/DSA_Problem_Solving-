#include<bits/stdc++.h>
#include<vector>
using namespace std;

int peakElement(vector<int> arr){
	// edge cases
	if(arr.size()==1) return 0;
	if(arr[0] > arr[1]) return 0;
	if(arr[arr.size()-1] > arr[arr.size()-2]) return arr.size() - 1;

	int low = 1;
	int high = arr.size() - 1;
	int mid;

	while(low <= high){
		int mid = ( low + high ) / 2;
		if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid + 1]){
			return mid;
		}
		else if(arr[mid] > arr[mid - 1]){
			low = mid + 1;
		}
		else{
			high = mid - 1;
		}
	}
	return -1;
}

int main(){
	vector<int>arr = {1,2,3,0,1};
	cout<< peakElement(arr);
}