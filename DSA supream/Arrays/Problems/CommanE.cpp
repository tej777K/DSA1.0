#include<iostream>
#include <bits/stdc++.h> 
#include<vector>
 using namespace std;

void Print(vector<vector<int>>v){

int r = v.size();
int c =v[0].size();

for(int statcol=0  ; statcol < c ; statcol++){
    if((statcol & 1) ==0){
       for(int i=0 ; i<r ; i++){
        cout<<v[i][statcol]<<" ";
       }
    }
    else{
        for(int i=r-1 ; i>=0 ; i--){
        cout<<v[i][statcol]<<" ";
       }
    }
}

}

int main(){

vector<vector<int>>v={
    {1,2,3,4},
    {5,6,7},
    {8,9,10}
};

Print(v);


    return 0;
}