#include<iostream>
using namespace std;


int findMin(int arr[] , int n , int index , int min){
    if(index == n-1){
        return min;
    }

    if(arr[index] < min){
        min = arr[index];
    }

    findMin(arr,n,++index,min);
}

int main(){


int arr[] = {3  ,0 , 5,6 ,7,8,9,3,4,5};

int res  = findMin(arr , 10, 0 , INT16_MAX );

cout<<"The minnimum element in the array is : "<<res<<endl;

    return 0; 
}