
#include<bits/stdc++.h>


using namespace std;

void reverseString(vector<char>& s) {
    int i = 0;
    int j = s.size()-1;

    while(i<=j){
        //swap i and j index values
        char t = s[i];
        s[i] = s[j];
        s[j] = t;

        i++;
        j--;
    }    
}

    int main(){
        
        string str = "Hannah";
        vector<char> s;

        for (int i = 0; i < str.length(); i++)
        {
            s.push_back(str[i]);
        }
        
        reverseString(s);

        for (int i = 0; i < s.size(); i++)
        {
            cout<<s[i]<<endl;
        }
        
        return 0;
    }

