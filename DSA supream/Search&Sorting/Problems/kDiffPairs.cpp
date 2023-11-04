// leetcode - 532

#include<iostream>
#include <bits/stdc++.h> 
#include<vector>
using namespace std;

// using Two pointer approch 

 
// int main(){
  
// vector<int>nums={1,1,1,1,1};
// int i =0 ;
// int j= i+1;
// int k = 1;
// sort(nums.begin() , nums.end());
// set<pair<int,int>>ans;

// while(j<nums.size()){
//     int diff = nums[j] - nums[i];
// if(diff == k){
//   cout<<nums[j]<<" "<<nums[i]<<endl;
//   ans.insert({nums[i],nums[j]});
//   i++,j++;
// }
// else if(diff>k){
//     i++;
// }
// else{
//     j++;
// }
// if(i==j){
//     j++;
// }
// }

// cout<<"k-pairs : "<<ans.size();
//     return 0;
// }

//M2. ==> Using Binary Search  //  TC ==> O(nlogn)


int bs(vector<int>&nums,int s,  int x){
    int n = nums.size();
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<=e){
      if(nums[mid]==x){
        return mid;
      }
      else if(x>nums[mid]){
        s = mid+1;
      }
      else{
        e=mid-1;
      }
      mid = s + (e-s)/2;
    }
    return -1;
}

int main(){

vector<int>nums={3,1,4,1,5};
int k=2;
sort(nums.begin(),nums.end());
set<pair<int ,int>>ans;

for(int i=0;i<nums.size();i++){
if(bs(nums,i+1,nums[i]+k) != -1){
      ans.insert({nums[i] , nums[i]+k});
}
}

cout<<ans.size()<<endl;

    return 0;
}