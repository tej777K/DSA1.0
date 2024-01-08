// // #include<iostream>
// // #include<vector>
// // using namespace std;



// // class Solution {
// // public:
// //     string longestCommonPrefix(vector<string>& strs) {
// //         vector<string>temp = {0};
// //         int i =0;
// //         while (i < strs.size() - 1)
// //         {
// //            if((temp[i]) == '0'){
// //             temp.push_back(strs[i]);
// //            }
// //         }
        
// //     }
// // };



// // int main(){

 
// //  vector<string>strs = {"flower","flow","flight"};
// // Solution s ;
// // s.longestCommonPrefix(strs);

// //     return 0;
// // }


// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
//         if (strs.empty()) return ""; // Return empty string if input vector is empty
       
//         string prefix = strs[0]; // Initialize prefix with the first string
       
//         for (int i = 1; i < strs.size(); ++i) {
//             int j = 0;
//             while (j < prefix.size() && j < strs[i].size() && prefix[j] == strs[i][j]) {
//                 ++j;
//             }
//             prefix = prefix.substr(0, j); // Update prefix to common substring
//             if (prefix.empty()) break; // If prefix becomes empty, no common prefix
//         }
       
//         return prefix;
//     }
// };

// int main() {
//     vector<string> strs = {"flower", "flow", "flight"};
//     Solution s;
   
//     string commonPrefix = s.longestCommonPrefix(strs);
//     cout << "The longest common prefix is: " << commonPrefix << endl;

//     return 0;
// }



class Solution{
    public:
    string longestCommanPrefix(vector<string>&str){
        string ans ;
        int i=0;

       while (/* condition */)
       {
        /* code */
       }
       
    }
}