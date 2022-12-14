#include<bits/stdc++.h>

using namespace std;

// Find missing number within the range of [0,n] where n is size of array
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int num = (n*(n+1))/2;
        for(int i=0;i<n;i++){
            num -= nums[i];
        }
        return num;
    }