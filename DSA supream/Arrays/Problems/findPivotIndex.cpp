#include<iostream>
#include<limits.h>
#include<vector>

using namespace std;



// class Solution {
// public:
//     int pivotIndex(vector<int>& nums) {
//         int size = nums.size();
//         int mid = (0+(size-1))/2;
//         int lsum=0;
//         int rsum=0;

//        while (1)
//        {
//            if(mid!=0){
//            lsum=0;
//             for(int i=0 ; i<mid ; i++){
//              lsum = lsum + nums[i];
//              cout<<lsum<<" ";
//         }
//         }else if(mid == 0 ){
//             lsum=0;
//             rsum=0;
//             for(int i=mid+1 ;i<size;i++){
//                 rsum = rsum + nums[i];
              
//             }
//             cout<<rsum<<" "<<lsum;
//             if(lsum==rsum){
//                 return mid;
//             }else{
//                 return -1;
//             }
//         }
//         else{
//             return -1;
//         }
//         cout<<endl;
//          if(mid!=size-1){
//             rsum=0;
            
//             for(int i=mid+1 ; i<size ; i++){
//                 rsum = rsum + nums[i];
//                 cout<<rsum<<" ";
//             }
//         }
//         else if(mid == size-1 ){
//             rsum=0;
//             lsum=0;
//                for(int i=0 ;i<size-2;i++){
//                 lsum = lsum =nums[i];
//             }
//             if(rsum==lsum){
//                 return mid;
//             }else{
//                 return -1;
//             }
//         }
//         else{
//             return -1;
//         }
//         cout<<endl;
//          cout<<"rsum : "<<rsum<<" lsum: "<<lsum<<endl;
//          cout<<"mid : "<<mid<<endl;
    
//         if(rsum==lsum){
//            return mid;
//         }
//         else if(rsum>lsum){
//             mid++;
//         }
//         else{
//             mid--;
//         }
     
//        }
//     }
   
// };



class Solution {
public:
   
   int call(vector<int>& nums){
       vector<int>lsum(nums.size(),0);
       vector<int>rsum(nums.size(),0);

       for(int i=1 ; i<nums.size();i++){
           lsum[i] = lsum[i-1]+nums[i-1];
       }

        for(int i=nums.size()-2 ; i>=0;i--){
           rsum[i] = rsum[i-1]+nums[i-1];
       }

       for(int i=0 ; i<nums.size();i++){
           if(lsum[i]==rsum[i]){
               return i;
           }
       }
       return -1;
   }
   
    int pivotIndex(vector<int>& nums) {
       return call(nums);
    }
   
};
int main(){
   vector<int>nums={1,7,3,6,5,6};

   Solution s;
   int r = s.pivotIndex(nums);
cout<<"The Pivot index is  : "<<r;

   return 0;
}
