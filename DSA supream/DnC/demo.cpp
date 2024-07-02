// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void merge(int arr[] , int s , int e){
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
    
    int leftIndex = 0 ;
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

void mergeSort(int arr[] , int s ,int e){
    
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;
    
    // Left 
    
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);
}

int main(){
    
    int arr[] = {2,1,6,9,4,5};
	int size = 6;
	int s = 0;
	int e = size - 1;

	cout << "Before merge sort: " << endl;
	for(int i=0; i<size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	
	mergeSort(arr,s,e);

	cout << "After merge sort: " << endl;
	for(int i=0; i<size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;



	return 0;
}