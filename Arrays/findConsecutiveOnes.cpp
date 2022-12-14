#include<bits/stdc++.h>

using namespace std;
//Find maximum number of consecutive occurences of ones    
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,maxCount=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }
            else{
                maxCount = max(count,maxCount);
                count=0;
            }
        }
        if(count>0)maxCount = max(count,maxCount);
        return maxCount;
    }