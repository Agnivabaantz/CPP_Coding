#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int maxProfit(vector<int>& prices) {
        int maximum,profit;
        maximum = INT_MIN;
        profit = 0;

        int maxp[prices.size()];

        for (int i = prices.size()-1; i >=0; i--)
        {
            maximum = max(prices[i],maximum);
            maxp[i] = maximum;
        }
        
        for (int i = 0; i < prices.size(); i++)
        {
            profit = max(maxp[i]-prices[i],profit);
        }
        
        return profit;
}

int main(){
    vector<int> n1 = {7,6,4,3,1}; // (7,6,6,6,6,4)
    
    int p = maxProfit(n1);

    cout<<p;
    return 0;
} 
