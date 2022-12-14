#include<bits/stdc++.h>

using namespace std;
//Code to print all combinations of 3 distinct elements in an array whose sum is 0  
  vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>> ans;

        for(int i=0;i<n-2;i++){
            if(i==0 || i>0 && nums[i]!=nums[i-1]){
                int lb= i+1, ub = n-1, sum = 0-nums[i];
                while(lb<ub){
                    if(nums[lb]+nums[ub]==sum){
                        vector<int>temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[lb]);
                        temp.push_back(nums[ub]);
                        ans.push_back(temp);
                        while(lb<ub && nums[lb]==nums[lb+1])lb++;
                        while(lb<ub && nums[ub]==nums[ub-1])ub--;
                        lb++;
                        ub--;
                    }
                    else if(nums[lb]+nums[ub]<sum)lb++;
                    else ub--;
                }
            }
        }
        return ans;
    }