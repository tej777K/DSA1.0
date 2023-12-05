#include<iostream>
#include<string.h>
using namespace std;

int findLen(char ch[] , int size ){

//using While loop 

int len =0 ;
int index = 0;

while (true)
{
    if(ch[index] == '\0'){
        break;
    }
    index++;
    len++;
}

return len;




// int len = 0;
//       for(int i =0 ; i< size ; i++){
//         if(ch[i] == '\0'){
//             break;
//         }
//         else{
//             len++;
//         }
//       }
//       return len;
}



int main(){

char ch[100];
cin.getline(ch , 100);
cout<<ch<<endl;

int len = findLen(ch , 100);

cout<<"Length of String is  : "<<len<<endl;

//with build in function 

 cout<<"Using STL function , The Length String is  : "<<strlen(ch)<<endl;



//       char ch[10];

//       //Taking input without using the for loop
//       //allowed in the ch array
//     //   cin>>ch;
//     cin.getline(ch , 100);

//       //print

//     //   for(int i=0 ; i <10 ; i++){
//     //     cout<<ch[i]<<" ";
//     //   }
//     //   }

//     //withput using the for loop we can print char array 

//     cout<<"Print the elements : "<< ch<<endl;

//     //printing using loopp 

// //     for(int i =0 ; i<10 ; i++){
// //         cout<<"At Index "<<i<<"  "<<ch[i]<<endl;
// //     }
  
// //     char temp = ch[5];
// //     int value = (int)temp;
// //     cout<<"printing integer value "<<value<<endl;
 


       


}