#include<bits/stdc++.h>

using namespace std;
//Code to find single non-duplicate element from a sorted array in O(log n) TC
    int singleNonDuplicate(vector<int>& nums) {
        int n= nums.size();
        int lb=0,ub=n-1,mid;

        while(lb<ub){
            mid = (lb+ub)/2;
            // even XOR 1 = odd and odd XOR 1 = even 
            if(nums[mid]==nums[mid^1]){
                lb = mid+1;
            }
            else{
                ub = mid;
            }
        }
        return nums[lb];
    }