#include<bits/stdc++.h>

using namespace std;

// Roman to Integer using map STL
int romanToInt(string s) {

    map<char,int> roms;
    
    roms['I']=1;
    roms['V']=5;
    roms['X']=10;
    roms['L']=50;
    roms['C']=100;
    roms['D']=500;
    roms['M']=1000; 

    int num=0,curr=0,prev=0;
    for (int i = s.length()-1; i >=0; i--)
    {
        curr = roms[s[i]];
        cout<<"curr= "<<curr<<"prev= "<<prev<<endl;
        if(prev>curr){
            num-= curr;
        }
        else{
            num+=curr;
        }
        prev = curr;
    }
    
    return num;
}

int main(){
    int num = romanToInt("MCMXCIV");
    cout<<num<<endl;
    return 0;
}