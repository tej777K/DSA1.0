#include<iostream>
#include<vector>
using namespace std;


void FindIndex(int arr[] , int n , int index , int num){

    if(index >= n){
        return;
    }

    if(num == arr[index]){
        cout<<index<<endl;
    }

    FindIndex(arr , n , index+1 , num);
}

int main(){

int arr[] = { 1,45,1,6,56,8,1,1,1};
int num = 1;

cout<<"Occurence element's index : "<<endl;

FindIndex(arr , 9 , 0 , num );


    return 0;
}