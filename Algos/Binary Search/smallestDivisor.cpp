#include<bits/stdc++.h>

using namespace std;
//Code to find smallest divisor which returns sum of quotients less than or equal to threshold
    int smallestDivisor(vector<int>& nums, int threshold) {
        int lb=1,ub=INT_MIN,mid;
        for(int num:nums)
            ub = max(ub,num);
        
        while(lb<ub){
            mid = (lb+ub)/2;
            int sum=0;
            for(int num:nums){
                sum+= ceil(num*1.0/mid);
            }
            if(sum<=threshold){
                ub=mid;
            }
            else{
                lb = mid+1;
            }
        }
        return lb;
    }