#include<iostream>
using namespace std;

void permutation(string &str , int index ){
    int n = str.length();

    if(index >= n){
        cout<<str<<" ";
        return;
    }

    for(int j = index ; j < n ; j++){
        swap(str[index],str[j]);


 //recursion

    permutation(str,index+1);

    //Backtraking to nullyfy the prev task , so that to maintain the original str

    swap(str[index] , str[j]);

    }

    

   

    }
 

int main(){

     string str = "abc";
    int index = 0;
    permutation(str , index);
}