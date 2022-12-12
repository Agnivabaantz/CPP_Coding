 #include<bits/stdc++.h>

using namespace std;
//Code to return position of target element if not present in sorted array   
    int searchInsert(vector<int>& nums, int target) {
        int lb=0,ub= nums.size()-1;
        int mid = (lb+ub)/2;
        int pos = mid;

        while(lb<=ub){
            mid = (lb+ub)/2;
            if(nums[mid]==target){
                pos=mid;
                break;
            }
            else if(nums[mid]>target){
                ub = mid-1;
                pos = round((lb+ub)/2.0);
            }
            else{
                lb = mid+1;
                pos = round((lb+ub)/2.0);
            }
        }
        
        pos = pos<0?0:pos;
        return pos;
    }