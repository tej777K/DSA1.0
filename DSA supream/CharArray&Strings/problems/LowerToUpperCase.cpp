#include<iostream>
#include<string.h>
using namespace std;

void LowertoUpper(char ch[] , int size){
    int index = 0;
    while (ch[index] != '\0')
    {
       
        if(ch[index] >= 'a' && ch[index] <= 'z' ){
            ch[index] = ch[index] - 'a' + 'A';
        }
        index++;
       
    }
    
}

int main(){
    char ch[100];
    cout<<"Enter the String"<<endl;
    cin.getline(ch , 100);

    LowertoUpper(ch , 100);
    cout<<ch<<endl;
}