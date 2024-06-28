#include<bits/stdc++.h>
using namespace std;

int searchRotatedSortedArray(vector<int> arr, int target){
	int low = 0;
	int high = arr.size() - 1;
	int mid;

	while(low <= high){
		mid = low + (high - low) / 2;
		if(arr[mid] == target)
			return mid;

		// check left half is sorted or not....
		else if( arr[low] <= arr[mid]){

			//checks element lies if left part 
			if( arr[low] <= target && arr[mid] >= target){
				high = mid - 1;
			}

			// element present in  right part
			else{
				low = mid + 1;
			}
		}
		// left half is not sorted then definetly right half will be sorted..
		else{
			//check elemngt lies in right part or not
			if( arr[mid] >= target && arr[high] <= target){
				low = mid + 1;
			}
			// element present in left part
			else {
				high = mid - 1;
			}
		}
	}
	return -1;
}

int main(){
	vector<int> arr= {7,8,9,1,2,3,4,5,6};
	cout<< searchRotatedSortedArray(arr,1);
}