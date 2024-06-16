#include<iostream>
using namespace std;

class Student{
private:
string gf;

public:
int id;
int age ;
string name;
int noS;
bool present;

Student(){
    cout<<"Default Constructor is called"<<endl;
}

Student(int id , int age , string name , int noS , bool present , string gf){
    this->id = id ;
    this->age = age;
    this->name = name;
    this->noS = noS ;
    this->present = present ;
    this->gf = gf;

    cout<<"Paramaterized constructor is called with gf "<<endl;
}

Student(int id , int age , string name , int noS , bool present){
    this->id = id ;
    this->age = age;
    this->name = name;
    this->noS = noS ;
    this->present = present ;
    this->gf = gf;

        cout<<"Paramaterized constructor is called w/o  gf "<<endl;

}

//Copy constructor 

Student(const Student&srcobj){
    this->age = srcobj.age;
      cout<<"Copy Constructor is called "<<endl;
}


void read(){
    cout<<"Reading"<<endl;

}
void Study(){
    cout<<"Studing"<<endl;

}
void chat(){
    cout<<"Chatting"<<endl;
}


};

int main(){

 Student s1(1 , 21 , "Bolu" , 3 , 0 , "Chutki");
// Student s2(2 , 20 , "Goli" , 6 , 1 );
// // s1.age = 21;
// cout<<s1.age<<endl;

// Student *s3 = new Student(1 , 21 , "Bolu" , 3 , 0 , "Chutki");
// delete s3;

Student s4 = s1 ; //Copy constructor will be called 
cout<<s4.age<<endl;



    return 0 ;
}