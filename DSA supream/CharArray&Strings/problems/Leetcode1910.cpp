#include<iostream>
#include<string>
using namespace std;


class Solution {
public:
    string removeOccurrences(string s, string part) {
while (1)
{
          int found = s.find(part);
          cout<<found<<endl;
          if(found == string::npos) break;

          string LP = s.substr(0 , found);
          string RP = s.substr(found + part.size() , s.size());

        s = LP + RP ;

}
return s;
      
    }
};

int main(){

string s = "daabcbaabcbc";
string part  =   "abc" ;

Solution obj ;
string r = obj.removeOccurrences(s , part);
cout<<r<<endl;
    return 0;
}

