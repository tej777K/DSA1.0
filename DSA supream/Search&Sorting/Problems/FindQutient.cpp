#include<iostream>
#include <bits/stdc++.h> 
#include<vector>
 using namespace std;

int getQutient(int divisor , int divident){

int s =0 ;
int e = divident;
int ans = -1;

int mid  = s + (e-s)/2;

while(s<=e){
    if(mid*divisor == divident){
        return mid;
    }
    else if(mid * divisor < divident){
        ans = mid;
        s = mid +1;

    }
    else {
        e = mid -1;
    }
    mid = s + (e-s)/2;

}
    return ans;


}
 
 
 int main(){

int divisor = -89 ;
int divident = 0;

int ans = getQutient(abs(divisor) , abs(divident));


//Now we need to decide which sigh we have to put !

if((divisor > 0 && divident < 0) || (divisor < 0 && divident > 0)){
    ans = 0  - ans;
}

cout<<"Fianl ans is : "<<ans<<endl;
 
    return 0;
 }