 #include<bits/stdc++.h>

using namespace std;
//Search for an element in rotated array using binary search   
    int binSearch(vector<int>& nums,int lb,int ub,int target){
        if(lb>ub){
            return -1;
        }
        else{
            int flag = -1;
            int mid = (lb+ub)/2;
            if(nums[mid]==target){
                return mid;
            }
            return max({binSearch(nums,mid+1,ub,target),binSearch(nums,lb,mid-1,target)});
        }
    }
    int search(vector<int>& nums, int target) {
        return binSearch(nums,0,nums.size()-1,target);
    }