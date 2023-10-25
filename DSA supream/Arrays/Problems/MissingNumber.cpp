#include<iostream>
#include<limits.h>
#include<vector>
#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    
    // int MN(vector<int>& nums){
    //     int i=0;
    //     int n=nums.size();
    //     while(i<n){
    //         if(i==nums[i]){
                
    //         }
    //         else{
    //             return i;
    //         }
    //         i++;
    //     }
    // }
    
    
    // int missingNumber(vector<int>& nums) {
    //     sort(nums.begin(), nums.end());
    //     return MN(nums);
    // }


    //Solving this using XOR 

    int missingNumber(vector<int>& nums) {
       int ans=0;

       //1. XOR all value of array 
       for(int i=0 ; i<nums.size();i++){
        ans ^= nums[i];
       }

       //XOR all range items 
       for(int i=0 ; i<nums.size();i++){
          ans ^= i;
       }

       return ans;


    
    }

};

int main(){
   vector<int>nums={1,2,3};

   Solution s;
   int r = s.missingNumber(nums);
cout<<"The missing number is  : "<<r;

   return 0;
}
