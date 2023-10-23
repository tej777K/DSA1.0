#include<iostream>
#include<limits.h>
#include<vector>

using namespace std;

//Q1. Separating the negative and positive numbers in an array 



// void Separate(int arr[] , int n ){
//        int j=0;
//     for(int index =0 ; index<n ; index++){
//         if(arr[index]<0){
//             swap(arr[index],arr[j]);
//             j++;
//         }
        
//     }
// }


// int main(){

// int arr[]={0,-7,12,-10,-11,40,60};
// int n=7;

// Separate(arr,n);

// cout<<"After Separation of -ve and +ve in an array : "<<endl;
// for(int i=0 ; i< n ;i++){
//    cout<<arr[i]<<" ";
// }
//     return  0;
// }

//Q2. Rotating the array 


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int temp[k];
        int j=0;
        for(int i=n-1; i>=n-k ;i--){
            temp[j]=nums[i];
            j++;
        }

        for(int i=n-1 ; i>=k ;i--){
            nums[i]=nums[i-k];
          
        }
        for(int i =0 ; i<k ; i++){
            nums[i]=temp[k-i-1];
            cout<<temp[i]<<" ";
        }
    }
};

int main(){
 
vector<int>nums={1,2,3,4,5,6,7};
Solution ob;
int k =3;
ob.rotate(nums,k);
cout<<"After function call : "<<endl;
int n = nums.size();
for(int i=0 ;i<n ; i++){
cout<<nums[i]<<" ";
}
   return 0;
}