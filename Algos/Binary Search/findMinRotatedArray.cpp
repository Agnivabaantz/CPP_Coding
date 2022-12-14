#include<bits/stdc++.h>

using namespace std;
//Find minimum element in rotated array
     int binSearch(vector<int>& nums,int lb,int ub){
        if(lb>ub){
            return INT_MAX;
        }
        else{
            int mid = (lb+ub)/2;
            return min({nums[mid],binSearch(nums,mid+1,ub),binSearch(nums,lb,mid-1)});
        }
    }
    int findMin(vector<int>& nums) {
        int n= nums.size();
        int minimum = binSearch(nums,0,n-1);
        return minimum;
    }
    //Another approach
        int findMin2(vector<int>& nums) {
        int n= nums.size();
        int minVal = INT_MAX;
        int lb=0,ub=n-1,mid;
        while(lb<=ub){
            mid = (ub+lb)/2;
            if(nums[lb]<=nums[ub]){
                minVal = min(nums[lb],minVal);
                break;
            }
            if(nums[lb]<=nums[mid]){
                minVal = min(nums[lb],minVal);
                lb = mid+1;
            }
            else{
                minVal = min(nums[mid],minVal);
                ub = mid-1;
            }
        }
        return minVal;
    }