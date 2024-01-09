#include<iostream>
using namespace std;

int find(int arr[] , int n , int index, int target){

if(target == arr[index]  && index <= n){
   return index;
}
if(index > n){
    return -1;
}


index++;
find(arr , n , index , target);


    
}

int main(){


int arr[] = { 4,6,7,5,4,7,54};

int target = 23;

int k = find(arr , 7 , 0 , target);

if(k != -1){
    cout<<"Element found ==> index: "<<k<<endl;
}else{
    cout<<"Not Found"<<k<<endl;
}
}