#include<iostream>
using namespace std;


int MissingElement(int arr[],int n){
  
int start = 0 ;
int end = n-1 ;
int mid = start + (end - start)/2;
cout<<mid<<endl;

while(start<=end){
    if(mid==arr[mid]-1 && start < end){
        start=mid+1;
    }
    else if(mid != arr[mid]-1 && start < end){
        end = mid -1 ;
    }
    else if((start == end) && mid != arr[mid]-1){
        return mid+1;
    }
    else if((start == end) && mid == arr[mid]-1){
       if(mid == n-1){
        return arr[mid]+1;
       }
       else{
        return -1;
       }
    }

    mid = start + (end - start)/2;
}

return -1;

}

int main(){


int arr[]  = {2,3,4,5,6,7,8,9};
int n = 8 ;
int ans = MissingElement(arr,n);
cout<<"The missing number is "<<ans<<endl;

    return 0 ;
}