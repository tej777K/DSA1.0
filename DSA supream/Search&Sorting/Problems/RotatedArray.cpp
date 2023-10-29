#include<iostream>
#include <bits/stdc++.h> 
#include<vector>
 using namespace std;

int pivotIndexFind(vector<int>& nums){
    int n = nums.size();
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while (s<=e)
    {
        if(s==e){
                return s;
            }
        else if(nums[mid] > nums[mid+1] && mid+1 < n){
            return mid;
        }
        else if(nums[mid] < nums[mid-1] && mid-1>=0){
            return mid -1;
        }
        else if(nums[s]>nums[mid]){
            e = mid -1;
        }
        else{
             s= mid +1;
        }

        mid = s + (e-s)/2;
    }
    return -1;
    
}

int Search(vector<int>& nums , int s , int e , int target){
    int n = nums.size();
    int mid = s + (e-s)/2;
    
     while(s<=e){
        
       if(nums[mid] == target){
        return mid;
       }
       else if(target > nums[mid]){
        s = mid +1;
       }
       else if(target < nums[mid]){
        e = mid -1;
       }
        mid = s + (e-s)/2;
         
     }

     return -1;
}


int main(){

vector<int>nums;
int target = 6;
int ans =-1;


nums.push_back(14);
nums.push_back(15);
nums.push_back(16);
nums.push_back(20);
nums.push_back(0);
nums.push_back(1);
nums.push_back(2);
nums.push_back(4);
nums.push_back(5);
nums.push_back(6);

int  n = nums.size();


int pivotIndex = pivotIndexFind(nums);
cout<<pivotIndex<<endl;

if(target >= nums[0] && target <= nums[pivotIndex]){
    ans  = Search(nums,0,pivotIndex,target);
}
else{
  ans = Search(nums,pivotIndex+1,n-1,target);
}

cout<<"The TArget is at the index : " <<ans <<endl;


    return 0;
}