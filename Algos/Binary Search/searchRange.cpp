#include<bits/stdc++.h>

using namespace std;
//Code to search range containing starting and ending index of repeated target element in sorted array   
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int lb=0,ub= n-1;
        int mid = (lb+ub)/2;
        vector<int>pos = {-1,-1};
        int start=-1,end=-1;

        while(lb<=ub){
            if(nums[mid]==target){
                end=mid;
                lb=mid+1;
            }
            else if(nums[mid]>target){
                ub = mid-1;
            }
            else{
                lb = mid+1;
            }
            mid = (lb+ub)/2;
        }
        cout<<"End of first loop"<<endl;

        pos[1]=end;

        lb = 0,ub = n-1;
        while(lb<=ub){
            mid = (lb+ub)/2;
            if(nums[mid]==target){
                start=mid;
                ub=mid-1;
            }
            else if(nums[mid]>target){
                ub = mid-1;
            }
            else{
                lb = mid+1;
            }
        }
        cout<<"End of second loop"<<endl;
        pos[0]=start;
        return pos;
    }