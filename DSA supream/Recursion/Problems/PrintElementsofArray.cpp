#include<iostream>
using namespace std;

void print(int arr[] , int n  , int  index){

    if(index == n){
        return;
    }

    cout<<arr[index]<<endl;
    index++;
    print(arr,n,index);
}


int main(){


int arr[] = { 2,3,4,6,7};

print(arr , 5 , 0);


    return 0;
}