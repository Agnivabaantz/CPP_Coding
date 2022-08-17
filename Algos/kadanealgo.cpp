#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

// Kadane's Algorithm (Naximum Subarray)

int maxSubArray(vector<int>& nums) {
    int maxsum = INT_MIN;
    int currsum=0;
    if(nums.size() == 1){
        return nums[0];
    }
    else{
        for (int i = 0; i < nums.size(); i++)
        {
            currsum = currsum + nums[i];
            maxsum = max(currsum,maxsum);
            currsum = max(currsum,0);
        }
    }
    return maxsum;    
}
int main(){
    vector<int> v = {-1,-2,-3,-4,-5};
    int max = maxSubArray(v);
    cout<<max<<endl;
    return 0;
}