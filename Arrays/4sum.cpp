#include<bits/stdc++.h>

using namespace std;
//Code to print all combinations of 4 distinct elements in an array whose sum is equal to target  
  vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>> ans;

        for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                        long long target2 = (long long)target - (long long)(nums[i] + nums[j]);
                        int lb = j+1,ub=n-1;
                        while(lb<ub){
                            if(nums[lb]+nums[ub] == target2){

                                vector<int>temp;
                                temp.push_back(nums[i]);
                                temp.push_back(nums[j]);
                                temp.push_back(nums[lb]);
                                temp.push_back(nums[ub]);
                                ans.push_back(temp);
                                while(lb<ub && nums[lb]==nums[lb+1])lb++;
                                while(lb<ub && nums[ub]==nums[ub-1])ub--;
                                lb++;
                                ub--;
                            }
                            else if(nums[lb]+nums[ub] < target2)lb++;
                            else ub--;
                        }
                        while(j+1<n && nums[j+1]==nums[j])j++;
                }
                while(i+1<n && nums[i+1]==nums[i])i++;
        }
        return ans;
    }