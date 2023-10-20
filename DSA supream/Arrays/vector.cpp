//Vector STL in C++

#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>v){
    int size = v.size();
    cout<<"the elements of vector array are : ";
    for(int i =0 ; i<size  ; i++){
        cout<<v[i]<<" ";
    }

   
}

int main(){
    //in vector don't tell the size 
    //just keep inserting , it will amnage the allocations
    //vectors are noting but the arrays only!

    vector<int>v;

    //insert 
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);

    while (1)
    {
        int d;cin>>d;
        v.push_back(d);
        cout<<"Capcity : "<<v.capacity()<<" "<<"Size : "<<v.size()<<endl;
    }
    

    print(v);
    
    return 0;

}