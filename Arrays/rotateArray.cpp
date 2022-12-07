#include<bits/stdc++.h>

using namespace std;
//Rotate array elements by position k
int returnIndex(int num, int k,int size){
        do{
            num = (num+k)%size;
        }while((num+k)%size >= size);
        return num;
}
void rotate(vector<int>& nums, int k) {
        vector<int>b;
        for(int i=0;i<nums.size();i++){
            b.push_back(0);
        }
        for(int i=0;i<nums.size();i++){
            int index = returnIndex(i,k,nums.size());
            b[index] = nums[i];
        }
        for(int i=0;i<nums.size();i++){
            nums[i] = b[i];
        }
}

// Solution with O(1) space complexity
    void rotate2(vector<int>& nums, int k) {
        int n= nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k%n);
        reverse(nums.begin()+k%n,nums.end());
    }