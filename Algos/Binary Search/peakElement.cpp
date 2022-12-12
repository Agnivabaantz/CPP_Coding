#include<bits/stdc++.h>

using namespace std;
//Code to find any peak element in a given array
//My approach
 int binSearch(vector<int>& nums,int lb,int ub,int len){
        if(lb>ub){
            return -1;
        }
        else{
            int peak = -1;
            int mid = (lb+ub)/2;
            if((mid+1<len && mid-1>=0) && (nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1])){
                peak = mid;
            }
            else if((mid+1<len && mid-1<0) && (nums[mid]>nums[mid+1])){
                peak = mid;
            }
            else if((mid+1>=len && mid-1>=0) && (nums[mid]>nums[mid-1])){
                peak = mid;
            }
            return max({peak,binSearch(nums,mid+1,ub,len),binSearch(nums,lb,mid-1,len)});
        }
    }
    int findPeakElement(vector<int>& nums) {
        int peak = -1;
        if(nums.size()>1){
            peak = binSearch(nums,0,nums.size()-1,nums.size());
        }
        else if(nums.size()==1){
            peak = 0;
        }
        return peak;
    }
//Another approach
    int findPeakElement2(vector<int>& nums) {
        int peak = 0,n=nums.size();
        int lb=0, ub= n-1,mid=(lb+ub)/2;
        while(lb<=ub){
            if((mid==0 && mid+1<n) && (nums[mid]>nums[mid+1])){
                peak = mid;
                break;
            }
            if((mid==n-1 && mid-1>=0) && (nums[mid]>nums[mid-1])){
                peak = mid;
                break;
            }
            if((mid+1<n && mid-1>=0) && (nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])){
                peak = mid;
                break;
            }
            if(mid-1>=0 && nums[mid-1]>nums[mid]) ub = mid-1;
            else lb = mid+1;

            mid = (lb+ub)/2;
        }
        return peak;
    }