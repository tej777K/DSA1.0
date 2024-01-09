// #include<iostream>
// #include<vector>
// using namespace std;

// void store(int arr[] , int n , int index , vector<int>&nums){
    
    
//     if((index !=  n) && (arr[index] % 2) == 0){
//         nums.push_back(arr[index]);

//     }

//     if(index >= n){
//         return;
//     }

//     store(arr , n , index+1 , nums);


// }


// int main(){

// vector<int>nums;
// int arr[] = { 1,2,3,4,5,6,7,8,9,10};

// store(arr , 10 ,  0 , nums);
//  cout<<"The vector elements are  :"<<endl;
//  for (const int& i : nums) {
//     cout << i << "  ";
//   }
//     return 0;


// }



#include<iostream>
#include<vector>
using namespace std;

void store(int arr[] , int n , int index){
    
    
   if(index >= n){
    return;
   }

   arr[index] = arr[index]*2;

   store(arr , n , index+1);

}


int main(){


int arr[] = { 1,2,3,4,5,6,7,8,9,10};

store(arr , 10 ,  0 );

 for (auto  i : arr) {
    cout << i << "  ";
  }
    return 0;


}