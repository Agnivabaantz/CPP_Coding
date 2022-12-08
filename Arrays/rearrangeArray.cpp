#include<bits/stdc++.h>

using namespace std;
// Rearrange positive and negative numbers in an array into alternate positions
    vector<int> rearrangeArray(vector<int>& nums) {
        if(nums.size()<2){
            return nums;
        }
        else{
            vector<int> positive;
            vector<int> negative;
            for(int i=0;i<nums.size();i++){
                if(nums[i]>0)positive.push_back(nums[i]);
                else negative.push_back(nums[i]);
            }
            int n = positive.size();
            int flag = 0,nIndex=0,pIndex=0;
            nums.clear();
            while(pIndex<n && nIndex<n){
                if(!flag){
                    nums.push_back(positive[pIndex]);
                    pIndex++;
                    flag=1;
                }
                else{
                    nums.push_back(negative[nIndex]);
                    nIndex++;
                    flag=0;
                }
            }
            if(pIndex<n){
                nums.push_back(positive[pIndex]);
            }
            if(nIndex<n){
                nums.push_back(negative[nIndex]);
            }
            return nums;
        }
    }