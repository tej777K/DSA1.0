#include<iostream>
#include<string>
using namespace std;

int main(){

   string st1;
   string st2;
   cout<<"ENter the String 1:  ";
//    cin>>st;
//    cout<<st<<endl;

getline(cin , st1);
// cout<<"Enter the String 2 :";
// getline(cin , st2);

// cout<<st<<endl;

// cout<<"Length of String : "<<st.length()<<endl;

// cout<<st[4]<<endl;
 
// st.pop_back();
// cout<<st<<endl;
// cout<<(int)st[4]<<endl;

int found = st1.find("t");
cout<<found<<endl;

// cout<<"Concatination :"<<st1 + st2; 


}