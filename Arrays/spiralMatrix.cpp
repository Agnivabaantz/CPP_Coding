#include<bits/stdc++.h>

using namespace std;
// Code to print matrix in spiral order
   vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> v;
        int m = matrix.size();
        int n = matrix[0].size();
        int trow=0, lcol=0, rcol = n-1, brow = m-1;
        int len = m*n,count=0,i=0,j=0;

        cout<<"Hello"<<endl;
        while(count<len){
            if(i==trow && j==lcol){
                cout<<"Inside 1st Quadrant"<<endl;
                for(j=lcol;j<=rcol;j++){
                    cout<<matrix[i][j]<<"->";
                    v.push_back(matrix[i][j]);
                    count++;
                }
                // cout<<"i:"<<i<<"j:"<<j<<endl;
                i++;
                j--;
                trow++;
                // cout<<"i:"<<i<<"j:"<<j<<endl;
            }
            else if(i==trow && j==rcol){
                cout<<"Inside 2nd Quadrant"<<endl;
                for(i=trow;i<=brow;i++){
                    cout<<matrix[i][j]<<"->";
                    v.push_back(matrix[i][j]);
                    count++;
                }
                j--;
                i--;
                rcol--;
            }
            else if(i==brow && j==rcol){
                cout<<"Inside 3rd Quadrant"<<endl;
                for(j=rcol;j>=lcol;j--){
                    cout<<matrix[i][j]<<"->";
                    v.push_back(matrix[i][j]);
                    count++;
                }
                i--;
                j++;
                brow--;
            }
            else if(i==brow && j==lcol){
                cout<<"Inside 4th Quadrant"<<endl;
                for(i=brow;i>=trow;i--){
                    cout<<matrix[i][j]<<"->";
                    v.push_back(matrix[i][j]);
                    count++;
                }
                j++;
                i++;
                lcol++;
            }

        }
        return v;
    }
    int main(){
        vector<vector<int>> matrix {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
        vector<int> v = spiralOrder(matrix);
        return 0;
    }