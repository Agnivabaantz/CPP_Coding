#include<bits/stdc++.h>

using namespace std;
long int F[31];
int fib(int n) {
        F[0]=0;
        F[1]=1;
        for(int i = 2;i<=n;i++){
            F[i] = F[i-1] + F[i-2];
        }
        return F[n];
}