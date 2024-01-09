#include<iostream>
using namespace std;

bool find(int arr[] , int n , int index, int target){

if(target == arr[index]  && index <= n){
   return true;
}
if(index > n){
    return false;
}


index++;
find(arr , n , index , target);


    
}

int main(){


int arr[] = { 4,6,7,5,4,7,54};

int target = 6;

bool k = find(arr , 7 , 0 , target);

if(k==true){
    cout<<"Element found"<<endl;
}else{
    cout<<"Not Found"<<endl;
}
}