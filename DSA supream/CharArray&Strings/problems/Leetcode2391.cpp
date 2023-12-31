// https://leetcode.com/problems/minimum-amount-of-time-to-collect-garbage/description/

// class Solution {
// public:
//     int garbageCollection(vector<string>& garbage, vector<int>& travel) {
//         int travelP =0 ;
//         int travelG =0 ;
//         int travelM = 0;

//         int pickP = 0;
//         int pickG = 0;
//         int pickM = 0;

//         int lastP = 0;
//         int lastM = 0;
//         int lastG = 0; 

//         //Calculate pick time and the travel time

//         for(int i =0 ; i < garbage.size() ; i++){
//             string currG = garbage[i];
            
//             for(int j = 0 ; j < currG.length() ; j++){
//                 char ch = currG[j];

//                 if(ch == 'P'){
//                     pickP++;
//                     lastP = i;

//                 }if(ch == 'G'){
//                     pickG++;
//                     lastG = i ;

//                 }if(ch == 'M'){
//                     pickM++;
//                     lastM = i ;

//                 }
//             }
//         }

//         // Calculate the total min travel time 

//         for(int i=0 ; i<lastP ; i++){
//           travelP += travel[i];
//         }
//         for(int i=0 ; i<lastG ; i++){
//             travelG += travel[i];
//         }
//         for(int i=0 ; i<lastM ; i++){
//              travelM += travel[i];
//         }

// int ans = (travelP + pickP ) + (travelG + pickG ) + (travelM + pickM);

// return ans;

//     }
// };


// #include<iostream>
// using namespace std;

// int main(){
//     string arr[] = { "gg" , "ff" , "df"  , "f"};
//     for(int i =0 ; i<sizeof(arr) / sizeof(arr[0]) ; i++){
//         // cout<<arr[i]<<" "<<endl;
//         string curr = arr[i];
//         for(int j = 0 ; j < sizeof(curr) / sizeof(curr[0]) ; j++){
//             cout<<curr[j]<<" "<<endl;
//         }
//     }
    
//     return 0;
// }