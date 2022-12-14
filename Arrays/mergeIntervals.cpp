#include<bits/stdc++.h>

using namespace std;
// Code to merge overlapping intervals in  an array and return the finl output
bool static sortcol(vector<int>&v1,vector<int>&v2){
    return v1[0]<v2[0];
}
vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),sortcol);
        vector<vector<int>> merged;
        int lb,ub,index=-1;
        for (int i = 0; i < intervals.size(); i++)
        {
            lb = intervals[i][0];
            ub = intervals[i][1];
            //cout<<"Current interval:"<<"("<<lb<<","<<ub<<")"<<endl;
            //cout<<"Merged array status:"<<endl;
            //print(merged);
            //cout<<"Index="<<index<<endl;
            if(merged.size()==0){
                //cout<<"Empty merged array"<<endl;
                vector<int> range = {lb,ub};
                merged.push_back(range);
                index++;
            }
            else{
                //cout<<"merged[index][0]--"<<merged[index][0]<<endl;
                if(lb>= merged[index][0] && lb<= merged[index][1]){
                    //if(merged[index][1]>=lb && merged[index][1]<=ub)continue;
                    if(ub>merged[index][1])merged[index][1]=ub;
                }
                else{
                    vector<int> range = {lb,ub};
                    merged.push_back(range);
                    index++;
                }
            }
        }
        return merged;
}