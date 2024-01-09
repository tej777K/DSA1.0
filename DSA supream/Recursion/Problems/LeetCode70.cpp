// You are climbing a staircase. It takes n steps to reach the top.

// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

 

// Example 1:

// Input: n = 2
// Output: 2
// Explanation: There are two ways to climb to the top.
// 1. 1 step + 1 step
// 2. 2 steps
// Example 2:

// Input: n = 3
// Output: 3
// Explanation: There are three ways to climb to the top.
// 1. 1 step + 1 step + 1 step
// 2. 1 step + 2 steps
// 3. 2 steps + 1 step


#include<iostream>
using namespace std;

int numberOfWays(int s){
    if(s==0){
        return 1;
    }
    if(s==1){
        return 1;
    }

    return  numberOfWays(s-1) + numberOfWays(s-2);
}


int main(){

   int s  = 3 ;

cout<<"NUmer of ways :"<<numberOfWays(s)<<endl;
    return 0;
}