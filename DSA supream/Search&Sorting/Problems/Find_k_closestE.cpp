
#include<iostream>
#include <bits/stdc++.h> 
#include<vector>
using namespace std;


class Solution {
public:
int lowerBound(vector<int>&arr , int x){
    int start =0 ,end = arr.size()-1;
    int ans = end;
    while(start<=end){
        int mid = (start + end)/2;
        if(arr[mid] >= x){
            ans =mid ;
            end = mid -1;
        }
        else if(x>arr[mid]){
           start = mid +1;
        }
        else{
            end = mid -1;
        }
    }
    return ans;
}

 vector<int> bsM(vector<int>& arr, int k, int x) {
       //lower bound 
       int h = lowerBound(arr,x);
       int l = h-1;

       while(k--){
           
           if(l<0){
               h++;
           }
           else if(h >= arr.size()){
               l--;
           }
           
           else if(x-arr[l] > arr[h]-x){
               h++;
           }else{
               l--;
           }
       }
       return vector<int>(arr.begin()+l+1 , arr.begin()+h);
    }


//  vector<int> twoPointerM(vector<int>& arr, int k, int x) {
//         int l =0 , h = arr.size()-1;

//         while(h-l >= k){
//             if(x-arr[l] > arr[h] - x){
//                 l++;
//             }else{
//                 h--;
//             }
//         }

//         vector<int>ans;
//         for(int i=0 ; i<=h ; i++){
//             ans.push_back(arr[i]);
//         }
//         return ans;
//     }

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
       return bsM(arr, k , x);
    }
};


int main(){

  vector<int>v1={1,2,3,4,5};
  int k =4;
  int x =-1;

   Solution s;
     s.findClosestElements(v1,k,x);

for(int i=0 ; i<k ; i++){
    cout<<v1[i]<<" ";
}

    return 0;
}