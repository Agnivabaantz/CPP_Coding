#include<bits/stdc++.h>

using namespace std;
// Code to find out the longest streak of consecutive numbers in  an array
    int longestConsecutive(vector<int>& nums) {
        set<int> s;
        for(int i =0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int currStreak=0;
        int maxStreak = 0;
        for(int i=0;i<nums.size();i++){
            if(!s.count(nums[i]-1)){
                int n = nums[i];
                currStreak++;
                while(s.count(n+1)){
                    currStreak++;
                    n++;
                }
                maxStreak = max(currStreak,maxStreak);
                currStreak=0;
            }
        }
        return maxStreak;
    }