#include<bits/stdc++.h>
#include<algorithm>

using namespace std;
// Move zeroes to extreme left of array in-place
    void moveZeroes(vector<int>& nums) {
        int key = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                int t = nums[i];
                nums[i] = nums[key];
                nums[key] = t;
                key++;
            }
        }
    }