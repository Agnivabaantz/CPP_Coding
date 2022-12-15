#include<bits/stdc++.h>

using namespace std;
/*
A conveyor belt has packages that must be shipped from one port to another within days days.

The ith package on the conveyor belt has a weight of weights[i]. Each day, we load the ship 
with packages on the conveyor belt (in the order given by weights). We may not load more weight 
than the maximum weight capacity of the ship.

Return the least weight capacity of the ship that will result in all the packages on the conveyor 
belt being shipped within days days.
*/
   int shipWithinDays(vector<int>& weights, int days) {
        int lb=1,ub,mid;
        for(int w:weights){
            ub+=w;
            lb = max(w,lb);
        }

        while(lb<ub){
            mid = (lb+ub)/2;
            int capacity=mid,d=1;
            for(int w:weights){
                if(capacity-w>=0){
                    capacity -= w;
                }
                else{
                    d++;
                    capacity=(mid-w);
                }
            }
            if(d>days){
                lb = mid+1;
            }
            else{
                ub = mid;
            }
        }
        return lb;
    }