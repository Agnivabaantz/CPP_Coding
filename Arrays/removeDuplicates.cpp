#include<bits/stdc++.h>

using namespace std;
// Remove duplicate elements from sorted array
int removeDuplicates(vector<int>& nums) {
    int k =1;
    int current = nums[0];
    for(int i=1;i<nums.size();i++){
        if(nums[i]!=current){
            current = nums[i];
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}