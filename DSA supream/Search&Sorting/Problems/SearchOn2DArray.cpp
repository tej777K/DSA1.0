#include<iostream>
#include<vector>
using namespace std;


bool BS(vector<vector<int>>& arr , int target){
    int row = arr.size();
    int col = arr[0].size();
    int n = row*col;

    int s =0;
    int e = n-1;
    int mid = s +(e-s)/2;

    while(s<=e){

        int rowIndex = mid/col;
        int colIndex = mid%col;
        int cuurentNumber = arr[rowIndex][colIndex];


        if(cuurentNumber == target){
            return true;
        }
        else if(target > cuurentNumber){
            s = mid +1;
        }
        else{
            e = mid -1;
        }
        mid = s +(e-s)/2;


    }
    return false;
}

int main(){

    int target=500;

vector<vector<int>> arr 
    { 
        {2,4,6,8}, 
        {10,12,14,16}, 
        {18,20,22,24},
        {28,34,40,50} 
    }; 

     bool r = BS(arr,target);
     if(r){
        cout<<"Element found"<<endl;
     }else{
        cout<<"NOt found"<<endl;
     }


    return 0;
}