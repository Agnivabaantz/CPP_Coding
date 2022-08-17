#include<bits\stdc++.h>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int s1 = m;
        int s2 = m;
        for (int i = 0; i < n; i++)
        {
            nums1[s1] = nums2[i];
            s1++; 
        }
        
        s1=0;
        if(m==0 || n==0)return;
        if(nums1[m-1]<nums1[m])return;

        while (s1<m && s2<nums1.size())
        {

            if(nums1[s1]<nums1[s2]){
                s1++;
            }
            else{
                int val = nums1[s2];
                int index = s2;
                while (index != s1)
                {
                    nums1[index]= nums1[index-1];
                    index--;
                }
                nums1[s1]=val;
                s2++;
                m++;
                s1++;
            }
        }    
}
