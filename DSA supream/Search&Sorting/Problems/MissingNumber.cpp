#include<iostream>
using namespace std;

int FindMissingElement(int arr[] , int n){
    int s =0;
    int e = n-1;
    int mid = s + ( e - s )/2;
    int diff;
    int ans = -1;
    
    while(s<=e){
        diff = arr[mid] - mid ;
        // if(s == mid){
        //     ans = arr[mid] -1 ;
        // }
        
        if(s==e && diff == 1){
               ans = arr[mid] + 1;
               break;
           }
        else if(s==e && diff != 1){
               ans = arr[mid] - 1;
               break;
           }   
           
        
        else if(diff == 1){
            s = mid +1;
        }
        else if(diff != 1){
           ans = arr[mid];
           e = mid -1;
        }
        mid = s + ( e - s )/2;
    }
    return ans;
}

int main(){
    
    int arr[] = {1,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(int);
    cout<<n;
    // int n =8;
    
    int k = FindMissingElement(arr,n);
    cout<<"The Missing Number is : "<<k<<endl;
    
    
    return 0;
}