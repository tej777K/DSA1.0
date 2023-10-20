#include<iostream>
#include<limits.h>
using namespace std;


// void countOnesandZeros(int arr[],int size){
//     int countone =0;
//     int countzero=0;
//     for(int i=0 ; i<size;i++){
//         if (arr[i]==1)
//         {
//             countone++;
//         }else{
//             countzero++;
//         }
// }
//     cout<<"NO of zeros "<<countzero<<" "<<"NO of ones "<<countone<<endl;

// }
// int main(){
    // cout<<"Hello World";
    // int arr[]={0,0,0,1,1,0,1,0};
    // cout<<sizeof(arr);
    
    // int size =8;
    // countOnesandZeros(arr,size);
    // for(int i=0 ; i<size;i++){
    //     if (arr[i]==1)
    //     {
    //         countone=countone+1;
    //     }else{
    //         countzero=countzero+1;
    //     }
        
    // }
    // cout<<"NO of zeros "<<countzero<<" "<<"NO of ones"<<countone<<endl;

// }


// Minimum number in an Array

// void findMinandMax(int arr[],int size){
//     int min = INT16_MAX;
//       for(int i=0 ; i<size ;i++){
//         if(arr[i]<min){
//             min=arr[i];
//         }    
//       }

  
//       cout<<"The Minimum nuber in an Array is "<<min<<endl;
// }



// int main(){
//     int arr[]={2,-45,32,5,8,1,43,56};
//     int size = 8;

//     findMinandMax(arr,size);
    
// }


//Reverse an Array 

// int main(){
//     int arr[]={1,2,3,4,5,6,7};
//     int size =7;
//     int a[7];
//     for(int i=size-1,k=0;i>=0;i--,k++){
//          a[k]=arr[i];
//     }
//     cout<<"The reversed array is ";
//     for(int i=0; i<size ; i++){
//        cout<<a[i]<<" "; 
//     }
    
// }

// BY swaping without creating another array
//for even array

// void reversanarray(int arr[],int size){
//     int left =0;
//     int right=size-1;
//     while (left<=right)
//     {
//         swap(arr[left],arr[right]);
//         left++;
//         right--;
//     }
//     for(int i=0 ; i<size ; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){
//     int arr[]={1,2,3,4,5,6,7};
//     int size =7;
//     reversanarray(arr,size);

// }


// Extresm print in an array 

// void extream(int arr[],int size){

//     // for odd array use if condition 
//     int left = 0;
//     int right = size -1;
//     while(left<=right){
//         cout<<arr[left]<<" ";
//         cout<<arr[right]<<" ";
//         left++;
//         right--;
//     }
// }

// int main(){
//     int arr[]={10,20,30,40,50};
//     int size =5;
//      extream(arr,size);
// }


//Call by value and call by reference 


// int fun(int&k){
//   k++;
//     return k;
// }

// int main(){
//     int n =5 ;
//     fun(n);
//     cout<<n;
// }

// Find the Unique elements in array

// int unique(int arr[] , int n){
//     int ans =0 ;
//     for(int i=0 ;i <n ; i++){
//          ans = ans ^ arr[i];
//     }
//     return ans;
// }

// int main(){
//     int arr[]={2,10,11,10,2,13,15,13,15};
//     int n =9;

//     int finalans = unique(arr,n);
//     cout<<"Unique Number is : "<<finalans;
// }


//print all pairs in array 

// int main(){
//     int arr[] ={10,20,30};
//     int n=3;

//     for(int i=0; i<n ; i++){
//         for(int j=0 ; j<n ; j++){
//             cout<<arr[i]<<","<<arr[j]<<endl;
//         }
//     }
// }

// pairs sum in an array 


// int main(){
//     int arr[]={10,20,30};
//     int n =3;
// int sum =0;
//      for(int i=0; i<n ; i++){
//         for(int j=0 ; j<n ; j++){
//             cout<<arr[i]+arr[j]<<endl;
//         }
//     }

// }

// print all triplets in an array


// int main(){
//     int arr[] ={10,20,30};
//     int n=3;

//     for(int i=0; i<n ; i++){
//         for(int j=0 ; j<n ; j++){
//             for(int k=0 ; k<n ;k++){
//                 cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
//             }
//         }
//     }
// }


//Sort 0's and 1's in an array
 

// void sortZO(int arr[] , int n){
//     int countz=0;
//     int counto=0;
//     for(int i =0 ; i<n ;i++){
//         if(arr[i]==0){
//             countz++;
//         }
//         else
//         {
//             counto++;
//         }

//     }

//     int i=0;
//     while(countz--){
//       arr[i] = 0;
//       i++;
//     }
//     while(counto--){
//       arr[i] = 1;
//       i++;
//     }

//   for(int i=0 ; i<n ; i++){
//         cout<<arr[i]<<" ";
//     }
//  }

//  int main(){
//     int arr[]={0,1,0,0,0,1,1,0,0};
//     int n=9;

//     sortZO(arr,n);
//  }
    



// #include <iostream>

// void sortZO(int arr[], int n) {
//     int countz = 0;
//     int counto = 0;
    
//     // Count the number of 0s and 1s in the array
//     for (int i = 0; i < n; i++) {
//         if (arr[i] == 0) {
//             countz++;
//         } else if (arr[i] == 1) {
//             counto++;
//         }
//     }

//     // Fill the first 'countz' elements with 0 and the rest with 1
//     for (int i = 0; i < countz; i++) {
//         arr[i] = 0;
//     }
//     for (int i = countz; i < n; i++) {
//         arr[i] = 1;
//     }

//     // Print the sorted array
//     for (int i = 0; i < n; i++) {
//         std::cout << arr[i] << " ";
//     }
// }

// int main() {
//     int arr[] = {0, 1, 0, 0, 0, 1, 1, 0, 0};
//     int n = 9;

//     sortZO(arr, n);

//     return 0;
// }


//Shift array elements by 1

// void Shift(int arr[] , int n){

//      int temp = arr[n-1];

//     for(int i=n-1 ; i>=0 ; i--){
//         if(i==0){
//             arr[0]=temp;
//         }else{
//             arr[i]=arr[i-1];
//         }
//     }

// }

// int main(){
    
//     int arr[] ={ 10 ,20, 30, 40, 50, 60};
//     int size = 6;

//     Shift(arr,size);
    
//     cout<<" After Shifting "<<endl;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//Shift array elements by 2 (k=2)

// void Shift(int arr[] , int n,int k){

// int temp[k];
// for(int i=0 ; i<k ;i++){
//    temp[i]=arr[n-1];
//    n--;
// }


// for(int i=n+k ; i>=n-k ; i--){
//    arr[i]=arr[i-2];
// } 

// for(int i=0; i<k;i++){
//     arr[i]=temp[i];
// }
// }

// int main(){
    
//     int arr[] ={ 10 ,20, 30, 40, 50, 60};
//     int size = 6;
//     int k=2;

//     Shift(arr,size,k);
    
//     cout<<" After Shifting "<<endl;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//Sorting 0's and 1's in diffrent approch

#include<iostream>
using namespace std;

 void sort(int arr[] , int n){
    int l=0;
    int h = n-1;
    while(l!=h){
       if(arr[l]==0){
        l++;
        if (arr[h]==1)
       {
        h--;
       }
       }

        else if(arr[h]==1){
        h--;
        if (arr[l]==0)
       {
        l++;
       }
       }
       
       else{
            swap(arr[l],arr[h]);
      
       }
       
    }
}

int main(){
    
    int arr[] = {0,0,1,1,0 ,1 ,0 ,0 ,1,1,0,0};
    int size = sizeof(arr)/sizeof(int);
    sort(arr,size);
    cout<<"After sorting : "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }


    return 0;

}