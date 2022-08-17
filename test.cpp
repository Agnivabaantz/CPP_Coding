#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

void print(vector<int> nums){
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}

void printMap(unordered_map<int,int> m){
    for (auto i = m.begin(); i != m.end(); i++)
    {
        cout<<i->first<<"->"<<i->second<<" ";
    }
    cout<<endl;
}

 bool isValid(string s) {
     stack<char> st;

     for(int i=0;i<s.length();i++){
         
         if(s[i]=='(' || s[i]=='{' || s[i]=='['){
             st.push(s[i]);
         }
        
        if(s[i]==')'){
            if(st.empty())return false;
            if(st.top()=='('){
                st.pop();
            }
            else{
                return false;
            }
        }
        if(s[i]=='}'){
            if(st.empty())return false;
            if(st.top()=='{'){
                st.pop();
            }
            else{
                return false;
            }
        }
        if(s[i]==']'){
            if(st.empty())return false;
            if(st.top()=='['){
                st.pop();
            }
            else{
                return false;
            }
        }
    }

    return st.empty();
}
int main(){
    bool flag = isValid("(])");
    cout<<flag<<endl;
    return 0;
}