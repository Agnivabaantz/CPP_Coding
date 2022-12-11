#include<bits/stdc++.h>

using namespace std;
/*
Given an integer array nums, return the number of reverse pairs in the array.

A reverse pair is a pair (i, j) where:

0 <= i < j < nums.length and
nums[i] > 2 * nums[j].
*/   
   int merge(vector<int>&nums, int lb, int mid, int ub){
        int count = 0;
        int left,right=mid+1;
        for(left = lb;left<=mid;left++){
            while(right<=ub && nums[left] > (2 * (long long) nums[right])){
                right++;
            }
            //count number of elements to the left of right pointer of right subarray
            count+= right - (mid+1);
        }
        left = lb,right=mid+1;
        int index=0;
        vector<int> t;
        while(left<=mid && right<=ub){
            if(nums[left]<nums[right]){
                t.push_back(nums[left++]);
            }
            else{
                t.push_back(nums[right++]);
            }
        }
        while(left<=mid)t.push_back(nums[left++]);
        while(right<=ub)t.push_back(nums[right++]);

        for(int i =lb;i<=ub;i++){
            nums[i]= t[index++];
        }
        return count;
    }
    int mergeSort(vector<int>&nums, int lb, int ub){
        if(lb>=ub)return 0;
        int mid = (lb+ub)/2;
        int count = mergeSort(nums,lb,mid);
        count += mergeSort(nums,mid+1,ub);
        count += merge(nums,lb,mid,ub);
        return count;
    }
    int reversePairs(vector<int>& nums) {
        int count = mergeSort(nums,0,nums.size()-1);
        for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<"->";
        }
        cout<<endl;
        return count;
    }