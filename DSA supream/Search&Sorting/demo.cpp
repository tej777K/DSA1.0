#include <iostream>
#include<vector>
using namespace std;


// int main() {
//     int n; // The size of the array
//     std::cout << "Enter the size of the array: ";
//     std::cin >> n;

//     if (n <= 0) {
//         std::cout << "Invalid array size. Exiting." << std::endl;
//         return 1;
//     }

//     // Dynamically allocate an integer array of size 'n'
//     int* dynamicArray = new int[n];

//     // Check if memory allocation was successful
//     if (dynamicArray == nullptr) {
//         std::cout << "Memory allocation failed. Exiting." << std::endl;
//         return 1;
//     }

//     // Initialize the array elements
//     for (int i = 0; i < n; i++) {
//         dynamicArray[i] = i * 2;
//     }


//       // Print the array elements
//     std::cout << "Array elements before resizing:" << std::endl;
//     for (int i = 0; i < n; i++) {
//         std::cout << dynamicArray[i] << " ";
//     }
    


//    // The size of the array
//     std::cout << "Enter the size of array to resize it :  ";
//     std::cin >> n;


//  // Dynamically allocate an integer array of size 'n'
//     dynamicArray = new int[n];

//     // Check if memory allocation was successful
//     if (dynamicArray == nullptr) {
//         std::cout << "Memory allocation failed. Exiting." << std::endl;
//         return 1;
//     }

//     // Initialize the array elements
//     for (int i = 0; i < n; i++) {
//         dynamicArray[i] = i * 2;
//     }
//     // Print the array elements
//     std::cout << "Array elements:" << std::endl;
//     for (int i = 0; i < n; i++) {
//         std::cout << dynamicArray[i] << " ";
//     }

//     // Deallocate the dynamically allocated memory
//     delete[] dynamicArray;

//     return 0;
// }


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s  = 0;
        int e = nums.size() - 1 ;
         int mid = s + (e-s)/2;

         while(s <= e){
              
            if(nums[mid] == target){
                return mid;
            }
        
        else if(s==e){
            if(target > nums[mid]){
                return mid+1 ;
            }
            else{
                return mid ;
            }
        }
        
        else if(target > nums[mid]){
           s = mid +1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
         }
         return mid;
    }
    
};

int main(){
 Solution myObj;  
 vector<int>nums = {3,5,7,9,10};
 int target = 8;
 int k =  myObj.searchInsert(nums , target) ;  

 cout<<"Index : "<<k<<endl;
  return 0;
}