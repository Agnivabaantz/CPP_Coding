#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>>v;
    vector<int>v1 = {1};

    v.push_back(v1);
    
    for (int i = 1; i < numRows; i++)
    {
        vector<int> vi;
        for (int j = 0; j <= i; j++)
        {
            if(j==0 || j==i) vi.push_back(1);
            else{
                int num = v[i-1][j-1]+v[i-1][j];
                vi.push_back(num);
            }
        }
        v.push_back(vi);      
    }
    return v;
    }