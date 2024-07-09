#include <bits/stdc++.h>
using namespace std;

int totalTimeTaken(vector<int>piles,int hourly, int h){
	int totalTimes = 0;
	for( int i = 0 ; i < piles.size() ; i++ ){
		 
		totalTimes = totalTimes + ceil( (double)piles[i] / (double)hourly );
		if(totalTimes > h) return h+1;
	}
	return totalTimes;
}

int kokoEatingBanana(vector<int>piles, int h){
	int low = 1;
	int high = *max_element(piles.begin(),piles.end());   // max koko can eat max piles number per hour after
	int mid;
	int ans = high;

	while(low <= high){
		int mid = (low+high) / 2;
		//cout << mid << " "<<totalTimeTaken(piles,mid) <<endl;
		if(totalTimeTaken(piles,mid , h) <= h){
			ans = mid;
			//cout<< mid <<endl;
			high = mid - 1;
		}
		else{
			low = mid + 1;
		}
	}
	return ans;	
}
int main(){
	vector<int>piles = {30,11,23,4,20};
			 
	int h = 5;  // maximum hours

	cout<< kokoEatingBanana(piles , h);
	return 0;
	 
}