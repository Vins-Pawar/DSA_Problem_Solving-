//#include<bits/stdc++.h>

#include<iostream>
#include<vector>
using namespace std;

int firstOccurance(vector<int> arr, int target){
	int low = 0 ;
	int high = arr.size()-1;
	int mid;
	int ans = -1;

	while(low <= high){
		 
		mid = low + (high - low)/2;
		if(arr[mid] == target){
			ans = mid;
			high = mid - 1;
		}
		// ans will lies in right part
		else if(arr[mid] < target){
			low = mid +1;
		}
		// ans will lies in left part
		else {
			high = mid - 1;
		}
	}
	return ans;
}


int lastOccurance(vector<int> arr, int target){
	int low = 0;
	int high = arr.size()-1;
	int mid;
	int ans = -1 ;

	while(low <= high){
		mid = low + (high - low)/2 ;
		if(arr[mid]==target){
			ans = mid ;
			low = mid + 1 ; //search in right for any more occrances
		}
		else if(arr[mid] < target){
			low = mid + 1; // ans will lies in right part
		}
		else{
			high = mid - 1;
		}
	}
	return ans;
}

int main(){

	vector<int>arr={2,3,5,7,11,11,11,13,13,17};
	int target = 13;
	int fistOccIndex = firstOccurance(arr,target);
	 
	int lastOccIndex = fistOccIndex == -1 ? -1 : lastOccurance(arr,target);

	cout<< fistOccIndex << " "<< lastOccIndex << endl;
	
}