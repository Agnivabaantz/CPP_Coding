#include<bits/stdc++.h>

using namespace std;
/*
Koko loves to eat bananas. There are n piles of bananas, the ith pile has 
piles[i] bananas. The guards have gone and will come back in h hours.

Koko can decide her bananas-per-hour eating speed of k. 
Each hour, she chooses some pile of bananas and eats k bananas from that pile. 
If the pile has less than k bananas, she eats all of them instead and will not 
eat any more bananas during this hour.

Koko likes to eat slowly but still wants to finish eating all the bananas before 
the guards return.

Return the minimum integer k such that she can eat all the bananas within h hours.
*/
    int minEatingSpeed(vector<int>& piles, int h) {
        int lb=1, ub= 1000000000,mid;

        while(lb<ub){
            mid = (lb+ub)/2;
            int count=0;
            for(int p:piles)
                count+= ceil(p*1.0/mid);
            if(count<=h){
                ub = mid;
            }
            else{
                lb = mid+1;
            }
        }
        return lb;
    }