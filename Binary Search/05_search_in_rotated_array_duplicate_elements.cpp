#include<iostream>
#include<vector>
using namespace std;

bool searchInRotatedArray(vector<int>arr,int target){
	int low = 0;
	int high = arr.size()-1;
	int mid;

	while(low <= high){
		mid = (low + high) / 2;
		if(arr[mid]==target){
			return true;
		}
		
		if(arr[mid] == arr[low] && arr[mid] == arr[high]){
			low++;
			high--;
			continue;
		}
		if(arr[low] <= arr[mid]){
			if(arr[low] <= target && arr[mid] >= target){
				high = mid - 1;
			}
			else{
				low = mid + 1;
			}
		}
		else{
			if(arr[mid] <= target && arr[high] >= target){
				low = mid + 1;
			}
			else{
				high = mid - 1;
			}
		}
	}
	return false;
}

int main(){
	vector<int>arr={3,3,1,2,3,3,3,3,3,3};
	int target = 4;
	cout << searchInRotatedArray(arr,target);
}