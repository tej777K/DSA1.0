#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        int index = 0;
        string temp="";

        while(index < s.length()){
            if(temp[temp.length()-1] == s[index] && temp.length() > 0){
                temp.pop_back();
            }
            else{
                temp.push_back(s[index]);
            }
            index++;
        }
        return temp;
    }
};

int main(){
    string s="azxxxzzy";
    Solution obj;

   string r =  obj.removeDuplicates(s);
   cout<<r<<endl;
}