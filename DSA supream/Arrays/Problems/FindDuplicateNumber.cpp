//Leet Code 

//Find the Duplicate number in an array  

#include<iostream>
#include<limits.h>
#include<vector>

using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        int j =i+1;

        while(i<n){
            if(nums[i]==nums[j] && j<n){
                  return nums[i];
            }
            else if(j<n){
                j++;
            }
            else{
                i++;
                j=i+1;
            }
        }
        return -1;
    }
};
int main(){
   vector<int>nums={3,1,4,2,1,3};
   Solution s;
   int r = s.findDuplicate(nums);
cout<<"The Duplicate number is  : "<<r;

   return 0;
}
