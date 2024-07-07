#include<iostream>
#include<vector>
using namespace std;

int singleElement(vector<int>arr){
	//edgeCases
	if(arr.size()==1)  return arr[0];
	if(arr[0] != arr[1])  return arr[0];
	if(arr[arr.size()-1] != arr[arr.size()-2]) return arr[arr.size()-1];
	
	int low = 1;
	int high = arr.size()-2;
	int mid;

	while(low<=high){
		mid = low + (high - low)/2;

		// mid element not equal to its left and right adjust element
		if(arr[mid] != arr[mid-1] || arr[mid] != arr[mid+1]){
			return arr[mid];
		}
		else if((mid % 2== 0 && arr[mid]==arr[mid+1]) || (mid % 2 ==1 && arr[mid] == arr[mid-1])){
			low = mid + 1;
		}
		else{
			high = mid -1;
		}
	}
	return -1;
}

int main(){
	//vector<int>arr={1,1,2,2,3,3,4,5,5,6,6,7,7};
	vector<int>arr={1,2,2};
	cout<<singleElement(arr);
}