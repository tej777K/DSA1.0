
#include<iostream>
#include <bits/stdc++.h> 
#include<vector>
using namespace std;

int PeakIndex(int arr[] , int n){
    int s = 0 ;
    int e = n-1 ;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(arr[mid] > arr[mid+1]  && arr[mid]>arr[mid-1]){
            return mid ;
        }
        else if(arr[mid] < arr[mid+1]){
            s = mid+1;
        }
        else{
            e = mid -1;
        }

        mid = s +(e-s)/2;
    }
    return mid;
}


int main(){

int arr[] = {10,20,100,80,70,60,50,40,30};
int n = sizeof(arr)/sizeof(int);

int r = PeakIndex(arr,n);

cout<<"The Peak Index is : "<<r<<endl;

    return 0;
}