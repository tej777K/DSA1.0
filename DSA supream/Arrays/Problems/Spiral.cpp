#include<iostream>
#include <bits/stdc++.h> 
#include<vector>
 using namespace std;


class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>v;

        int r = matrix.size();
        int c = matrix[0].size();
        int total = r*c;

        int starting_row = 0;
        int Ending_col = c-1;
        int Ending_row = r-1;
        int starting_col = 0;

       int count =0 ;
       while(count<total){
           for(int i=starting_col ; i<=Ending_col && count<total ; i++){
               v.push_back(matrix[starting_row][i]);
               count++;
           }
           starting_row++;

           for(int i=starting_row ; i<=Ending_row && count<total ; i++){
               v.push_back(matrix[i][Ending_col]);
                count++;
           }
           Ending_col--;
        
           for(int i=Ending_col ; i>=starting_col && count<total ; i--){
               v.push_back(matrix[Ending_row][i]);
                count++;
               
           }
           Ending_row--;
           
           for(int i=Ending_row ; i>=starting_row && count<total ; i--){
               v.push_back(matrix[i][starting_col]);
                count++;

           }
           starting_col++;
       }
   return v;

       }
    
};

int main(){


vector<vector<int>>matrix={
    {1,2,3},
    {4,5,6},
    {7,8,9}};

   Solution s;
     vector<int>ans = s.spiralOrder(matrix);
   int r = matrix.size();
        int c = matrix[0].size();
        int total = r*c;

for(int i=0 ; i<total ; i++){
    cout<<ans[i]<<" ";
}


    return 0;
 }