#include<bits/stdc++.h>

using namespace std;

bool check(vector<int>& nums) {
        int count = 0, n = nums.size();
        bool flag = true;
        for(int i =0;i< n-1;i++){
            if(nums[i]>nums[i+1])count++;
        }
        if(nums[n-1]>nums[0])count++;
        if(count>1)flag = false;
        return flag;
}