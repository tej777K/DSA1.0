//Vector STL in C++

#include<iostream>
#include<vector>
using namespace std;

// void print(vector<int>v){
//     int size = v.size();
//     cout<<"the elements of vector array are : ";
//     for(int i =0 ; i<size  ; i++){
//         cout<<v[i]<<" ";
//     }

   
// }

// int main(){
//     //in vector don't tell the size 
//     //just keep inserting , it will amnage the allocations
//     //vectors are noting but the arrays only!

//     vector<int>v;

//     //insert 
//     // v.push_back(1);
//     // v.push_back(2);
//     // v.push_back(3);

//     while (1)
//     {
//         int d;cin>>d;
//         v.push_back(d);
//         cout<<"Capcity : "<<v.capacity()<<" "<<"Size : "<<v.size()<<endl;
//     }
    

//     print(v);
    
//     return 0;

// }


int main(){

//     vector<int> arr;
     
//      for(int i=0;i<=5;i++)
//      arr.push_back(i);

//      cout<<"Size : "<<arr.size()<<endl;
//      cout<<"Capacity : "<<arr.capacity()<<endl;
//      cout<<"max_Size: "<<arr.max_size()<<endl;

//      for(int i =0 ; i<arr.size()  ; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//      arr.resize(4);

//      cout<<"Size : "<<arr.size()<<endl;

//    for(auto k=arr.begin();k!=arr.end();k++){
//     cout<<*k<<" ";
//    }

vector<int>v;

for(int i =1 ;i<=5 ; i++){
    v.push_back(i);

}
cout<<"reference operator : [v]: "<<v[4]<<endl;
cout<<"v.at: "<<v.at(4)<<endl;
cout<<"front: "<<v.front()<<endl;
cout<<"back: "<<v.back()<<endl;


    return  0;

}


//2D Vector 

// int main(){
    
//     // vector<int>v;

//     // cout<<v.size()<<endl;
//     // cout<<v.capacity();

// //  vector<vector<int> >v(5,vector<int>(10,7));

// //  for(int i=0 ; i<v.size();i++){
// //     for(int j=0 ; j<v[i].size();j++){
// //         cout<<v[i][j]<<" ";
// //     }
// //     cout<<endl;
// //  }


// vector<vector<int> >v;

// vector<int>v1(10,0);
// vector<int>v2(5,1);
// vector<int>v3(7,0);
// vector<int>v4(20,1);
// vector<int>v5(3,0);

// v.push_back(v1);
// v.push_back(v2);
// v.push_back(v3);
// v.push_back(v4);
// v.push_back(v5);


//  for(int i=0 ; i<v.size();i++){
//     for(int j=0 ; j<v[i].size();j++){
//         cout<<v[i][j]<<" ";
//     }
//     cout<<endl;
//  }



  
// }