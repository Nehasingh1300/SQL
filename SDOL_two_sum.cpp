/**
Problem: https://leetcode.com/problems/two-sum/submissions/
**/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int arr[2]={0,0};
        for(int i=0; i<nums.size()-1; i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]+nums[j]==target){
                    arr[0]=i;
                    arr[1]=j;
                }
            }
        }
        vector<int> numbers(arr, arr + 2);
        return numbers;
    }
};
