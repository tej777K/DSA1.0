// #include<iostream>
// #include<string>
// using namespace std;

// class Solution {
// public:
//     string removeDuplicates(string s, int k) {
//         int index = 0;
//         // int nindex = -1;
//         string neww="";

//       while(index != '\0'){
           
//        }
//       }
//       return neww;
//     }
// };

// int main(){
  

//   string s="deeedbbcccbdaa";
//   int k = 3;
//   Solution obj;
//   string r  = obj.removeDuplicates(s , k);
//   cout<<r<<endl;
// }

#include <iostream>
#include <string>

std::string removeDuplicates(const std::string& s, int k) {
    std::string result;

    for (char ch : s) {
        if (result.empty() || result.back() != ch) {
            result.push_back(ch);
        } else if (result.length() >= k - 1 && result.substr(result.length() - k + 1) == std::string(k - 1, ch)) {
            result.resize(result.length() - k + 1);
        } else {
            result.push_back(ch);
        }
    }

    return result;
}

int main() {
    std::string s1 = "abcd";
    int k1 = 2;
    std::cout << "Input: s = \"" << s1 << "\", k = " << k1 << "\n";
    std::cout << "Output: \"" << removeDuplicates(s1, k1) << "\"\n\n";

    std::string s2 = "deeedbbcccbdaa";
    int k2 = 3;
    std::cout << "Input: s = \"" << s2 << "\", k = " << k2 << "\n";
    std::cout << "Output: \"" << removeDuplicates(s2, k2) << "\"\n";

    return 0;
}
