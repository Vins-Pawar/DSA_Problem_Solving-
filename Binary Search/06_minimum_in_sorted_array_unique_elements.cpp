#include<bits/stdc++.h>
using namespace std;

int mininumInSortedArray(vector<int>arr){
	int low = 0;
	int high = arr.size() - 1;
	int mid;
	int ans = INT_MAX;

	while(low <= high){
		mid = (low + high)/2;
		
		// optimization
		//check both half will be sorted
		if(arr[low] <= arr[high]){
			ans = min(ans , arr[low]);
			break;
		}		

		//check left half is sorted
		if(arr[low] <= arr[mid]){
			ans = min(ans , arr[low]);
			low = mid + 1 ;
		}
		//right half is sorted
		else{
			ans = min(ans , arr[mid]);
			high = mid -1;
		}
	
	}
	return ans;
}

int main(){
	vector<int> arr = {70,80,90,1,10,20,30,40,50,60};
	cout<< mininumInSortedArray(arr);
}