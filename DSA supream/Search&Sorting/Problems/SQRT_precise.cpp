#include<iostream>
using namespace std;


int FindSqrt(int n){
    int s = 0 ;
    int e = n;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(s==e || mid*mid == n){
            return mid;
        }
        else if(mid*mid > n){
            e = mid -1;
        }
        else{
            ans = mid;
            s= mid +1;
        }
     mid = s + (e-s)/2;

    }
    return ans;
}

int main(){

int n;
cout<<"Enter the Nuber to find the sqrt : "<<endl;
cin>>n;


double sqrt = FindSqrt(n);

    double Step = 0.1;
    int precision = 10;

for(int i=0 ; i<precision ; i++){
        
        double j = sqrt;
    while(j*j <= n){
        sqrt = j ;
        j += Step;
    }
    Step = Step/10;
}

// cout<<sqrt<<endl;
printf("%0.10f",sqrt);

    return 0;
}