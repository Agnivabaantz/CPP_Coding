#include<bits/stdc++.h>

using namespace std;
//Search element in 2D array
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(!matrix.size())return false;
        int start = 0;
        int row = matrix.size();
        int column = matrix[0].size();
        int end = row*column-1;
        while(start <= end)
        {
            int mid = start +(end-start)/2;
            if(target == matrix[mid/column][mid%column]) return true;
            if(target > matrix[mid/column][mid%column]) start = mid+1;
            else end = mid-1;
        }
        return false;
}