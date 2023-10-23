#include<iostream>
#include<limits.h>
#include<vector>
#include <bits/stdc++.h>

using namespace std;


class Solution {
    public:
       bool twopointerapproch(int arr[], int n, int x) {
          // code here
         int l = 0;
       int h=n-1;
        while (l<h) {
            int csum = arr[l]+arr[h];
            if(csum==x){
              return true;
            }
            else if(csum>x){
                h--;
            }else{
                l++;
            }
            
        }
        return false;
    }
    
    bool hasArrayTwoCandidates(int arr[], int n, int x) {
          // code here
          sort(arr , arr + n);
          return twopointerapproch(arr,n,x);
}
    
};

int main(){
   int  arr[] = {1,2,5,6,7};
   int n = 5;
   int x=4;

   Solution s;
   bool result = s.hasArrayTwoCandidates(arr,n,x);
   cout<<"x has the two candidate in an array : ";
   cout<<result;

   return 0;

}


