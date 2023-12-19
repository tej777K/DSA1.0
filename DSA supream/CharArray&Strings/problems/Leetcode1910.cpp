// #include<iostream>
// #include<string>
// using namespace std;


// class Solution {
// public:
//     string removeOccurrences(string s, string part) {
// while (1)
// {
//           int found = s.find(part);
//           cout<<found<<endl;
//           if(found == string::npos) break;

//           string LP = s.substr(0 , found);
//           string RP = s.substr(found + part.size() , s.size());

//         s = LP + RP ;

// }
// return s;
      
//     }
// };

// int main(){

// string s = "daabcbaabcbc";
// string part  =   "abc" ;

// Solution obj ;
// string r = obj.removeOccurrences(s , part);
// cout<<r<<endl;
//     return 0;
// }



#include<iostream>
#include<string>
#include<string.h>
using namespace std;


string remAllOcc(string str1 , string str2){

    

    while (true)
    {
        int i = str1.find(str2);

        if(str1.find(str2) != string::npos){
            
            str1.erase(i , str2.length());
        }
        else{
            return str1;
        }
    }
    
}

int main(){
 
string str1 = "axxxxyyyyb";
string str2  = "xy";

string r = remAllOcc(str1 , str2 );
cout<<"Resultant String : "<<r<<endl;
   

    return 0 ;
}