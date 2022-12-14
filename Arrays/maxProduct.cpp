#include<bits/stdc++.h>

using namespace std;
// Code to find maximum product of elements in an array
  int maxProduct(vector<int>& nums) {
        int prod = nums[0]; // stores maximum product
        int maxProd = nums[0]; // stores maximum product so far
        int minProd = nums[0]; // stores minimum product so far

        for(int i=1;i<nums.size();i++){
            int temp = max({nums[i],nums[i]*maxProd,nums[i]*minProd});
            minProd = min({nums[i],nums[i]*maxProd,nums[i]*minProd});
            maxProd = temp;

            prod = max(prod,maxProd);
        }

        return prod;
    }