#include<iostream>
#include<limits.h>
#include<vector>
#include <unordered_map> 
using namespace std;



int firstRepeateElement(int arr[],int n){

unordered_map<int, int>hash;
for(int i=0 ; i< n;i++){
    hash[arr[i]]++;
}

for(int i=0;i<n;i++){
    if(hash[arr[i]]>1){
        return i+1;
    }
}
return -1;
}

int main(){
 
int arr[] = {1, 2, 3, 4};
int n =sizeof(arr)/sizeof(arr[0]);

int r = firstRepeateElement(arr,n);
cout<<r<<endl;

    return 0;
}