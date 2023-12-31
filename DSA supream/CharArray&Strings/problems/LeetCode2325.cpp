// class Solution {
// public:
//     string decodeMessage(string key, string message) {
//         //Create MApping
//        int start = 'a';
//        char mapping[300]={0};

//        for(auto ch : key){
            
//             if(ch != ' ' && mapping[ch] == 0){
//             mapping[ch] = start;
//             start++;
//             }
//        }


//         //use mapping 
//         string ans;

//       for(auto ch : message){
//           if(ch == ' '){
//               ans.push_back(' ');
//           }else{
//           char decoder  =  mapping[ch];
//           ans.push_back(decoder);
//           }
//       }
//       return ans;

//     }
// };