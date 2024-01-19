#include<iostream>
using namespace std;

int factorial(int n){

    
    //base case 
     if(n==1)
     return 1;
    //recursinve relation
    int recursionkaans  = factorial(n - 1); 

    //Processing 
    int finalans = n * recursionkaans;

    return finalans;

    
}


int main(){

cout<<"Factorial of 5 :"<<factorial(5)<<endl;

    return 0;
}

// int counting(int n){

//     // base case 
//     if(n==1 || n==0){
//         return 1;
//     }

//     //recursive relation 

//     int recursionkans = counting(n-1);

//     //processing 

//     int finalans = 1 + recursionkans;
// }


// void print(int n){
 
//     if(n==1){
//         cout<<1<<endl;
//         return;
//     }
//     else{

      

//         print(n-1);

//           cout<<n<<endl;
//     }
// }


// int main(){


// // cout<<"Counting of  number : "<<counting(20)<<endl;  

// print(20);


//     return 0;
// }


///Fibinacci Series 

// int  Fib(int n){

//     if(n==0){
//         return 0;
        
//     }
//     if(n==1){
// return 1;        
//     }

   
//      int ans =  Fib(n-1) + Fib(n-2);
//      return ans;

// }

// int main(){

//  cout<<Fib(7);
//     return 0;
// }