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

void extream(int arr[],int size){

    // for odd array use if condition 
    int left = 0;
    int right = size -1;
    while(left<=right){
        cout<<arr[left]<<" ";
        cout<<arr[right]<<" ";
        left++;
        right--;
    }
}

int main(){
    int arr[]={10,20,30,40,50};
    int size =5;
     extream(arr,size);
}