
#include<bits/stdc++.h>


using namespace std;

    vector<int> Sum(vector<int>& nums, int target) {

        vector<pair <int,int>> map;
        vector<int> pos = {0,0};
        int index = 0;
        for(auto i = nums.begin(); i != nums.end();++i){
            map.push_back(make_pair(*i,index));
            index++;
        }
        sort(map.begin(),map.end());

        auto first = 0;
        auto last = map.size()-1;

        while (first < last)
        {
            //cout<<map[first].first<<" "<<map[last].first<<"\n";
            
            if( map[first].first + map[last].first== target){
                //cout<<"Sum equals:"<<map[first].first<<"+"<<map[last].first<<"\n";
                //cout<<"Map positions:"<<map[first].second<<" "<<map[last].second<<"\n";
                pos[0] = map[first].second;
                pos[1] = map[last].second;
                break;
            }
            else if (map[first].first+map[last].first > target)
            {
                //cout<<"Sum greater than target:"<<map[first].first<<"+"<<map[last].first<<"\n";
                last--;
                continue;
            }
            else{
                //cout<<"Sum less than target:"<<map[first].first<<"+"<<map[last].first<<"\n";
                first++;
                continue;
            }
        }

        return pos;   
    }

    int main(){
        vector<int> nums;
        nums = {2,7,11,15};
        int target = 22;

        vector<int>pos = Sum(nums,target);

        cout<<pos[0]<<" "<<pos[1];
        return 0;
    }

