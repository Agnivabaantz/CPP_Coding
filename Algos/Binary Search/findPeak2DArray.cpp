#include<bits/stdc++.h>

using namespace std;
//Find peak element in 2D array
    vector<int> binSearch(vector<vector<int>>& mat,int lb,int ub,int r,int c){
        if(lb>ub){
            return {-1,-1};
        }
        else{
                int mid = lb + (ub-lb)/2;
                int midR = mid/c, midC = mid%c;

                int element = mat[midR][midC];
                cout<<element<<endl;
                int left = midC-1>=0? mat[midR][midC-1]:-1;
                int right = midC+1<c? mat[midR][midC+1]:-1;
                int top = midR-1>=0? mat[midR-1][midC]:-1;
                int bottom = midR+1<r? mat[midR+1][midC]:-1;

                if(element>left && element>right && element>top && element>bottom){
                    return {midR, midC};
                }
                vector<int> lSol = binSearch(mat,lb,mid-1,r,c);
                vector<int> rSol = binSearch(mat,mid+1,ub,r,c);

                return (lSol[0]>rSol[0])?lSol:rSol;
        }
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int r = mat.size();
        int c = mat[0].size();
        int lb=0,ub = r*c-1,mid;
        vector<int> res = binSearch(mat,lb,ub,r,c);

        return res;
    }