//Check the elements is sorted or not using recus=rsion


#include<iostream>
using namespace std;


// bool chekSort(int arr[] , int n , int index){
      
//       if(index >= n){
//         return true;
//       }


//    if(arr[index] >= arr[index-1]){
//        bool agekaans =  chekSort(arr , n  , index+1);
//        return agekaans;
//    }else{
//     return false;
//    }

   
      
// }

// int main(){
 


// int arr[] = {1,3,884,6,80};
// int n = sizeof(arr)/sizeof(arr[0]);

// cout<<"Is Array is sorted : ? ";
// bool k = chekSort(arr , n , 1 );
// // cout<<k<<endl;
// if(k == 1){
//     cout<<"True";
// }else{
//     cout<<"False"; 
// }

  

//     return 0;
// }

// Binary Search using Recursion


// bool bs(int arr[] , int n , int target, int start ,  int end ){
      
//       if(start > end ){
//         return false;
//       }

//       int mid = start + (end - start ) /2 ;

//       if(arr[mid] == target ){
//         return true;
//       }
      
//       else if (target > arr[mid]){
//         return bs(arr,n,target,mid+1,end);
//       }else
//       {
//        return bs(arr,n,target,start,mid-1);
//       }
      


// }

// int main(){


// int arr[] = { 1,2,3,4,5,6,6,7};
// int n = sizeof(arr)/sizeof(arr[0]);
// int target = 1;
// int start = 0 ;
// int end = n-1;

// bool k = bs(arr,n,target,start,end);

// if(k){
//     cout<<"Target found"<<endl;
// }
// else{
//     cout<<"Target is not Found"<<endl;
// }


//     return 0;

// }


//Sub Sequncing of a String : 30:00

void findSubSequences(string str , string output , int index){
    if(index >= str.length()){

        cout<<output<<endl;
        return;
    }

    char ch = str[index];

    //Exclude

    findSubSequences(str , output , index+1);



        //Include  
//Add Ch charactoe to the out string 

output.push_back(ch);
findSubSequences(str, output,index+1);
}

int main(){
  

  string str = "abc";
  string output ="";
  int index = 0;
  findSubSequences(str,output,index);
 
  
    return 0;
}