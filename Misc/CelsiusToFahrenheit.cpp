#include<bits/stdc++.h>

using namespace std;

double FToC(double F){
    double C = (F -32)*5/9;
    return C;
}

int main(){
    double F;
    cout<<"Enter temperature in Fahrenheit :";
    cin >> F;
    double C = FToC(F);
    cout<<"\n Temperature in Celsius is: ś"<<C<<endl;
    return 0;
}