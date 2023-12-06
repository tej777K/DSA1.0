#include<iostream>
#include<string>
using namespace std;

int main(){

   string st;
   cout<<"ENter the String "<<endl;
//    cin>>st;
//    cout<<st<<endl;

getline(cin , st);
cout<<st<<endl;

cout<<"Length of String : "<<st.length()<<endl;


}