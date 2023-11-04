#include<iostream>
#include <bits/stdc++.h> 
#include<vector>
 using namespace std;


int SearchNSA(vector<int>& nums, int n,int target){
   int s =0;
   int e = n-1;
   int mid = s + (e-s)/2;

   while(s<=e){
    if(mid-1 >= 0 && nums[mid-1] == target){
        return mid-1;
    }
    if(nums[mid] == target){
        return mid;
    }
    if(mid+1 < n && nums[mid+1] == target){
        return mid+1;
    }
    if(target > nums[mid]){
        s = mid +2;
    }
    else{
        e = mid -2;
    }

    mid = s + ( e - s )/2;
   }
   return -1;

}

int main(){


vector<int>nums={20,10,30,50,40,70,60};
int n = 7;
int target=20;


int r = SearchNSA(nums,n,target);

cout<<"Target found at the index : "<<r<<endl;


    return 0;
}