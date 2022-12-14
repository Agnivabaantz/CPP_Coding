#include<bits/stdc++.h>

using namespace std;
/*
You are given an integer array bloomDay, an integer m and an integer k.

You want to make m bouquets. To make a bouquet, you need to use k adjacent 
flowers from the garden.

The garden consists of n flowers, the ith flower will bloom in the bloomDay[i] 
and then can be used in exactly one bouquet.

Return the minimum number of days you need to wait to be able to make m bouquets 
from the garden. If it is impossible to make m bouquets return -1.
*/
 int minDays(vector<int>& bloomDay, int m, int k) {
        int lb=1, ub=INT_MIN,mid;
        for(int num:bloomDay){
            ub = max(ub,num);
        }
        int res = -1;
        while(lb<=ub){
            mid = (lb+ub)/2;
            int lm=0,lk=0,flag=0;
            for(int b:bloomDay){
                if(b<=mid){
                    lk++;
                }
                else{
                    lk=0;
                }
                if(lk==k){
                    lm++;
                    lk=0;
                }
            }
            cout<<"Local m:"<<lm<<endl;
            cout<<"Mid value:"<<mid<<endl;
            if(lm<m){
                lb=mid+1;
            }
            else{
                res = mid;
                ub=mid-1;
            }
            cout<<"Result so far:"<<res<<endl;
        }
        return res;
    }