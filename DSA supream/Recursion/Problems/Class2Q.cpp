#include<iostream>
#include<vector>
using namespace std;

// void printDigits(int num){
 
//   if(num == 0){
//     return;
//   }
 
//   int digit = num % 10;
 
 
 
//   num = num / 10;
 
//   printDigits(num);
//   cout<<digit<<endl;
 
// }


int combine(vector<int>intarr , int index ,int k  , int store){
cout<<index<<endl;
    if(index < 0 ){
        return store;
    }

 store = store + intarr[index] * k;
 
  return combine(intarr , index-1 , k*10 , store);
   
}

int main(){
  vector<int>intarr = { 4,2,1,7};
int index = intarr.size() - 1;
  int k =1;
  int store = 0;
  int ans = combine(intarr , index , k  , store);
  cout<<"Integer : "<<ans<<endl;
 
//   printDigits(num);
 
  return 0;
 
 
}
