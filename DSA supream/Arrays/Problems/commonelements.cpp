#include<iostream>
#include <bits/stdc++.h> 
#include<vector>
 using namespace std;



class Solution{
    public:
        vector<int> common_element(vector<int>& v1,vector<int>& v2,vector<int>& v3)
    {
        // Your code here
        int n1 = v1.size();
        int n2 = v2.size();
        
        for(int i=0 ; i<n1 ; i++){
            for(int j =0 ; j<n2 ; j++){
                if(v1[i]==v2[j]){
                    v3.push_back(v1[i]);
                    i++;
                    break;
                }
            }
        }
        
        sort(v3.begin(), v3.end()); 
    }
};


 int main(){


vector<int>v1={3, 4, 2, 2, 4};
vector<int>v2={3, 2, 2, 7};
vector<int>v3;


   Solution s;
 s.common_element(v1,v2,v3);

int n3 = v3.size();

for(int i=0 ; i<n3 ; i++){
    cout<<v3[i]<<" ";
}


    return 0;
 }