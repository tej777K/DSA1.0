#include<iostream>
#include<vector>
#include <numeric>

using namespace std;


bool isPossible(int A[] , int N  , int M , int sol){
 int pageSum = 0;
 int c = 1;

 for(int i=0 ; i<N ;i++){
    if(A[i] > sol){
        return false;
    }
    if(pageSum + A[i] > sol){
        c++;
        pageSum = A[i];
        if(c>M){
            return false;
        }
    }
    else{
        pageSum += A[i];
    }
 }
 return true;
}

int bs(int A[] , int M , int N){
if(M>N) return -1;
int ans = -1;

    int start = 0;
    int end = accumulate(A , A+N , 0);

    while(start <= end){
        int mid = (start + end)/2;

        if(isPossible(A, N ,M, mid)){
            ans = mid ;
            end = mid -1;
        }
        else{
            start = mid +1;
        }
    }
    return ans;
}

int main(){

int A[]={12,34,67,90};
int M=2;
int N=4;

int r  = bs(A , M ,N);
cout<<r<<endl;    
    return 0; 
}