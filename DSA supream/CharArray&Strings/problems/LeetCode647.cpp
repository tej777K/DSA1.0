//  Explanation for this code is in the notes ****


// class Solution {
// public:
    
//     int checkSubPallindrome(string s , int i , int j){
//         int count=0;
    
//        while(i >= 0 && j <s.length() && s[i] == s[j]){
//                count++;
//                i--;
//                j++;
           
//        }
//        return count;
//     }
    
//     int countSubstrings(string s) {
//         int n = s.length();
//         int TotalCount = 0;
 
//         for(int center  = 0 ; center<n ; center++){

//             int OddkaCount =  checkSubPallindrome(s , center , center);

//            int EvenkaCount = checkSubPallindrome(s , center , center+1);

//            TotalCount = TotalCount +  OddkaCount + EvenkaCount ;
//         }

//         return TotalCount;
//     }
// };