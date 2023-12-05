#include<iostream>
#include<string.h>
#include<string>
#include<algorithm>
using namespace std;

void reverseanarray(char ch[] , int size){
  int n = strlen(ch);
  int i =0 ;
  int j = n - 1;

  while (i < j){
    int temp = ch[i];
    // ch[i] = ch[j];
    // ch[j] = temp ;
    swap(ch[i] , ch[j]);
    i++;j--;
  }

  cout<<"Reversed String is : "<<ch<<endl;

  
}

int main(){

    char ch[100];
     cout<<"Enter the String : "<<endl;
     cin.getline(ch , 100);

    //  reverseanarray(ch , 100);

     //printing the reversed String using STL meathod

     cout<<"Printing the Rversed String using the Stl : " <<endl;
     std:: reverse(ch , ch + strlen(ch));
     cout<<ch;


     return 0;


}