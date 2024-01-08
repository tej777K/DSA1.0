#include<iostream>
#include<vector>
using namespace std;

char check(string t , char ch){
    for(auto tch : t){
        if(ch == tch){
            return tch;
        }
    }
}

int main(){
  

  string s  = "anagram";
  string t = "naagram";

   vector<int> merged;
    for (int i : s) {
        // Check if the current element is different from the last element in the merged vector
        if (merged.empty() || i != merged.back()) {
            merged.push_back(i);
        }
    }

for(auto ch : s){
    // cout<<s[ch]<<endl;
    // cout<<ch<<endl;
    if(ch == check(t , ch)){
         
    }
}

    return 0;
}