#include<iostream>
#include<string>
#include<string.h>
using namespace std;


bool VallidPallindrome2(string str1){
    int k = 0;
    // int count =0 ;
    int flag = 0;
    // int i =1;
    while (str1[k] != '\0')
    {
        string str2 = str1;
        str2.erase(k,1);
        cout<<str2<<endl;

       for (int i = 0, j = str2.length()-1; i<=j ; i++ , j--)
       {
        if(str2[i] == str2[j]  || i == j){
            
            // cout<<"Equal"<<endl; 
              flag = 1;
        }
        else{
            flag = 0;
            break;
        }
       }
         if(flag == 1){
        return true;
    }
       k++;
    }

    return false;
    
}

int main(){

 
 string str1="malaalam" ;

 bool r = VallidPallindrome2(str1);
 if(r == true){
    cout<<"True"<<endl;
 }
 else{
    cout<<"False"<<endl;
 }


    return 0;
}



// class Solution {
// public:
    
//     bool checkPallindrome(string s , int i , int j){
//         while(i<=j){
//             if(s[i] != s[j]){
//                 return false;
//             }
//         else{
//             i++;
//             j--;
//         }
        
//         }
//         return true;
//     }
    

//     bool validPalindrome(string s) {
//        int i  =0 ;
//        int  j = s.length() - 1;
//        while(i<=j){
//            if(s[i] != s[j]){
//                return checkPallindrome(s,i+1,j) || checkPallindrome(s,i,j-1);
//            }else{
//                i++;
//                j--;
//            }
//        } 
//        return true;
//     }
// };