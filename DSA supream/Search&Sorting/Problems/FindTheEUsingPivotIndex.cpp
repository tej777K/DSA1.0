#include<iostream>
using namespace std;

int FindPivotIndex(int arr[] , int n){
    int s =0;
    int e = n-1;
    int mid = s + (e-s)/2;
    
    while(s<=e){
        if(s==e){
            return s;
        }
        else if(arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[mid] < arr[s]){
            e = mid -1;
        }
        else{
            s = mid +1;
        }
        mid = s + (e-s)/2;
    }
    return mid;
}

int findTarget(int arr[] , int s , int e , int target){
    int mid = s + (e-s)/2;
    
    while(s<=e){
        if(arr[mid]==target){
            return mid;
        }
        else if(target > arr[mid]){
            s = mid +1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return 0;
}

int main(){
    int arr[] = {14,15,16,20,0,1,4,5,6};
    int n = sizeof(arr)/sizeof(int);
    int target = 15;
    int PivotIndex = FindPivotIndex(arr,n);
    cout<<"The Pivot Index is : "<<PivotIndex<<endl;
    
    if(target > arr[0]){
        cout<<"Target found at the Index : "<<findTarget(arr,0,PivotIndex,target);
    }
    else{
        cout<<"Target found at the Index : "<<findTarget(arr,PivotIndex+1,n-1,target);
    }
    
    return 0;
}