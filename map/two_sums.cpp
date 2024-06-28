/*

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]


*/



#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int main()
{
    vector<int> nums={3,2,4};
    vector<int>ans;
    int target=6;

    //greedy approch
    for(int i=0;i<nums.size()-1;i++)
    {

        for(int j=i+1;j<nums.size();j++)
        {
            if(nums[i]+nums[j]==target)
            {
                ans={i,j};
                cout<<ans[0]<<" "<<ans[1]<<endl;
                //return 0;
            }
        }
    }
    ans.clear();
    //hash approch
    unordered_map<int,int>umap;

    for(int i=0;i<nums.size();i++)
    {
        if(umap.find(target-nums[i])!=umap.end())
        {
             ans.push_back(umap[target-nums[i]]);
             ans.push_back(i);
             cout<<ans[0]<<" "<<ans[1];
             return 0;
        }
        else{
            umap[nums[i]]=i;
        }
    }
}
