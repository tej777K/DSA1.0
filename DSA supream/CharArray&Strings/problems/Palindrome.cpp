#include<iostream>
#include<string.h>
using namespace std;

void CheckPallindrom(char ch[] , int size){
    int i =0 ;
    int j = strlen(ch) - 1;

    while (i<=j)
    {
        if(ch[i] != ch[j]){
            cout<<"The Given String is not a Pallindrome "<<endl;
            break;
        }
        else if(i==j){
            cout<<"The GIven String is Palindrome "<<endl;
            break;
        }
        else{
            i++;
            j--;
        }
    }
    

}

int main(){
    char ch[100];
    cout<<"Enter the String ";
    cin.getline(ch , 100);

    CheckPallindrom(ch , 100);
}