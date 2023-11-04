#include<iostream>
#include<limits.h>
#include<vector>

using namespace std;


void Move(vector<int>& v){
    int n = v.size();
    int i=0;
    int j =i+1;

    while(j<n || i<n){
        if(v[i]<0){
            i++;
        }
        else if(v[i]>=0){
            if(v[j]<0){
                swap(v[i],v[j]);
                i++;
                j++;
            }
            else if(v[j]>=0){
                j++;
            }

        }

        if(i>=n){
            return;
        }
    }
}


void move(vector<int>& v){
    int size =v.size();
    int l=0;
    int h= size -1 ;
    while (l<h)
    {
        if(v[l]<0){
            l++;
        }
        else if(v[h]>0){
            h--;
        }
        else{
            swap(v[l],v[h]);
        }
    }
    
}


int main(){
    
    vector<int>v={0,-1,-2,-3 , 8 , 6 , 5 };
    // Move(v);
    move(v);
    cout<<"After function call : "<<endl;
    for(int i=0 ; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    
    return 0;

}