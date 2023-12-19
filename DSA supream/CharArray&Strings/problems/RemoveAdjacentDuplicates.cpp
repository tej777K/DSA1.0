// #include<iostream>
// #include<string>
// using namespace std;

// class Solution {
// public:
//     string removeDuplicates(string s) {
//         int index = 0;
//         string temp="";

//         while(index < s.length()){
//             if(temp[temp.length()-1] == s[index] && temp.length() > 0){
//                 temp.pop_back();
//             }
//             else{
//                 temp.push_back(s[index]);
//             }
//             index++;
//         }
//         return temp;
//     }
// };

// int main(){
//     string s="azxxxzzy";
//     Solution obj;

//    string r =  obj.removeDuplicates(s);
//    cout<<r<<endl;
// }




#include<iostream>
using namespace std;
#include<string>
#include<string.h>


string removeAdj(string s){
    int i = 0;
    int k = 0;
    string temp="";
    while (i < s.length())
    {
        if(s[i] != temp[temp.length() - 1] && temp.length()-1 >= 0 ){
            temp.push_back(s[i]);
           
        }
        else{
           
            temp.pop_back();
        }
        i++;
    }

    return temp;
    
}



int main(){

  string  s= "azxxzy";

string res = removeAdj(s);
cout<<"The REsultant string is : "<<res<<endl;

    return 0;
}