#include<iostream>
#include<limits.h>
#include<vector>

using namespace std;

void find(int *arr , int n){
//     //visited meathod 

//     for(int i=0 ; i<n ; i++){
//         int index = abs(arr[i]);

//         if(arr[index-1]>0){
//             arr[index-1] *= -1;
//         }
//     }

//     for(int i=0 ; i<n ; i++){
//         cout<<arr[i]<<" ";
//     }

//     //all positive numbers are missing

//     cout<<"Missing element"<<endl; 
//  for(int i=0 ; i<n ; i++){
//         if(arr[i]>0){
//             cout<<i+1<<" ";
//         }
//     }


//M2. Sorting + swapping meathod :
 
 int i=0;

while(i<n){
    int index = arr[i]-1;

    if(arr[i] != arr[index]){
        swap(arr[i],arr[index]);
    }
    else{
        i++;
    }
}

for(int i=0 ; i<n ; i++){
       
            cout<<arr[i]<<" ";
}

cout<<endl;

for(int i=0;i<n;i++){
    if(arr[i]!= i+1){
        cout<<i+1<<" ";
    }
}

}

int main(){

int n;
int arr[] = {1,3,5,3,4};
n = sizeof(arr)/sizeof(arr[0]);

find(arr,n);

    return 0;
}