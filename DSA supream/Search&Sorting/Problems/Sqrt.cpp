#include<iostream>
#include <bits/stdc++.h> 
#include<vector>
 using namespace std;

 float Sqrt(float num){
    
    float s =0 ;
    float e = num;
     float mid = s + (e-s)/2;
    float ans = -1;

    while(s<=e){

      if(mid*mid == num){
        return mid;
      }
      else if(mid*mid > num){
        e = mid -1;
      }
      else if(mid*mid < num){
        // ans = mid;
        s = mid +1;
      }
    //  else{
    //     return mid;
    //  }
      mid = s + (e-s)/2;

    }
    return mid;
 }
 
 int main(){

float num;
cout<<"Enter the number to know the sqroot : "<<endl;
cin>>num;
 cout << fixed << setprecision(4) << Sqrt(num); 

    return 0;

 }