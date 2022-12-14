#include<bits/stdc++.h>

using namespace std;
// Find the total number of contiguous subarrays whose sum is equal to k
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size(),count=0;

        vector<int>prefixSum;
        prefixSum.push_back(nums[0]);

        unordered_map<int,int> mp;

        for(int i=1;i<n;i++){
            int sum = nums[i]+prefixSum[i-1];
            prefixSum.push_back(sum);
        }
        for(int i=0;i<n;i++){
            if(prefixSum[i]==k)count++;
            if(mp.find(prefixSum[i]-k)!=mp.end()){
                count+= mp[prefixSum[i]-k];
            }
            mp[prefixSum[i]]++;
        }

        return count;
    }