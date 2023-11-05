#include<iostream>
using namespace std;

int bsFirstO(int arr[] , int  n , int target){
    int s  = 0;
    int e = n-1;
    int mid  = s + ( e- s)/2;
    int ans  =-1;
    int c =0;
    
    while(s<=e){
        if(arr[mid] == target){
            ans = mid ;
            e = mid -1;
    
        }
        else if(target > arr[mid]){
            s = mid + 1;
        }
        else {
            e = mid -1;
        }
        
        mid = s + (e-s)/2;
    }
    return ans;
}

int bsLastO(int arr[] , int  n , int target){
    int s  = 0;
    int e = n-1;
    int mid  = s + ( e- s)/2;
    int ans  =-1;
    int c =0;
    
    while(s<=e){
        if(arr[mid] == target){
            ans = mid ;
            s = mid +1;
    
        }
        else if(target > arr[mid]){
            s = mid + 1;
        }
        else {
            e = mid -1;
        }
        
        mid = s + (e-s)/2;
    }
    return ans;
}

// int TotalOccurance(int FirstIndex , int LastIndex, int count){
//     for(int i = FirstIndex ; i<=LastIndex ; i++){
//         count++;
//     }
//     return count;
// }

int main(){
    
    int arr[] = { 10 , 20 ,30 ,30 ,30 ,30 ,30,30,40 ,50};
    int n = sizeof(arr)/sizeof(int);
    int target = 30;
    int count =0;
    
    int FirstIndex  = bsFirstO(arr,n,target);
    int LastIndex  = bsLastO(arr,n,target);
    int TotalOccurance = (LastIndex - FirstIndex) + 1;

 cout<<"Total Occurance is  : "<<TotalOccurance<<endl;
    return 0;
}