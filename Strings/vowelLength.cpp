#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

// Cpp code to check equal number of vowels on two equal halves of an even length string

    int checkVowels(string s){
        string vowels = "AEIOUaeiou";
        int count=0;
        for(int i =0;i<s.length();i++){
            cout<<vowels.find(s[i])<<endl;
            if(vowels.find(s[i])<vowels.length()){
                cout<<"Character: "<<s[i]<<endl;
                cout<<vowels.find(s[i])<<endl;
                count++;
            }
        }
        cout<<"Count "<<count<<endl;
        return count;
    }
    bool halvesAreAlike(string s) {
        int len = s.length();
        bool flag = false;
        if(len>1){
            string s1 = s.substr(0,len/2);
            string s2 = s.substr(len/2,len);
            if(checkVowels(s1)==checkVowels(s2)){
                flag = true;
            }
        }
        return flag;
    }
    int main(){
        string s = "textbook";
        cout<<halvesAreAlike(s);
        return 0;
    }