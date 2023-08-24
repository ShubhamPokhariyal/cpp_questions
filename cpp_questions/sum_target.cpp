#include<iostream>
#include<vector>
 
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j,num;
        vector<int> result;
        for(i=0;i<nums.size()-2;i++){
            num = nums[i];
            for(j=i+1;nums.size()-1;j++){
                if(num+nums[j]==target)
                        result[0] = i;
                        result[1] = j;
                        break;
            }
        }
        return result;
    }
};