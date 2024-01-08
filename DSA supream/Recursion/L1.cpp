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