#include<bits/stdc++.h>

using namespace std;

// XOR of even number of repeated numbers give zero
int singleNumber(vector<int>& nums){
        
        int n = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            n = n^nums[i];
        }
    return n;
}
int main(){
    return 0;
}