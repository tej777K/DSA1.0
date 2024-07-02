#include<iostream>
using namespace std;

void merge(int arr[] , int s , int e , int n){
  int mid = (s+e)/2;
    
    int lenleft = mid - s + 1;
    int lenright = e - mid;
    
    int *left = new int[lenleft];
    int *right = new int[lenright];

int k = s;

for(int i = 0 ; i<lenleft ; i++){
        left[i] = arr[k];
        k++;
    }
    
    k= mid+1;
     for(int i = 0 ; i<lenright ; i++){
        right[i] = arr[k];
        k++;
    }
    

    int leftIndex = 0;
    int rightIndex = 0;

    int mainArrayIndex = s;
  
  while(leftIndex < lenleft && rightIndex < lenright){
    
      if(left[leftIndex] < right[rightIndex]){
          arr[mainArrayIndex] = left[leftIndex];
          mainArrayIndex++;
          leftIndex++;
      }else{
          arr[mainArrayIndex] = right[rightIndex];
          mainArrayIndex++;
           rightIndex++;
      }
  }
      
      //1.left array Over 
      
      while(leftIndex < lenleft){
          arr[mainArrayIndex] = left[leftIndex];
          mainArrayIndex++;
          leftIndex++;
      }
      
      //2.right Array over
       
      while(rightIndex < lenright){
          arr[mainArrayIndex] = right[rightIndex];
          mainArrayIndex++;
          rightIndex++;
      }
      
     
     
  
  
  delete[] left;
  delete[] right;
  
    

}

void mergeSort(int arr[] , int s , int e, int n){

    if(s>=e){
        return;
    }

    int mid = (s+e)/2;

    mergeSort(arr,s,mid,n);
    mergeSort(arr,mid+1,n-1,n);
    merge(arr,s,e,n);
}

int main(){

    int arr[] = { 12,34,45,6,45,23,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    int s = 0 ;
    int e = n-1;


    cout<<"Before MergeSort ALgo :"<<endl;
    for(int i =0 ; i< n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    mergeSort(arr,s,e,n);

    cout<<"After MergeSort :"<<endl;
 
    for(int i =0 ; i< n ; i++){
        cout<<arr[i]<<" ";
    }

}