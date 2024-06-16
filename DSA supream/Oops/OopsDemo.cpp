#include<iostream>
#include<string>
#include<vector>
using namespace std;
 
class Student{

private:
    string gf;


public:
    int id;
    int age;
    bool present;
    string name;
    int nos;
    int *v;



 Student()
    {
        cout << "Student ctor called" << endl;
    } 

    // paremeterized ctor
    Student(int id, int age, bool present, string name, int nos, string gf)
    {
        this->id = id;
        this->age = age;
        this->present = present;
        this->name = name;
        this->nos = nos;
        this->gf = gf;
        this->v = new int(10);
        cout << "Student paremeterized ctor called" << endl;
    }


    // copy ctor
    Student(const Student &srcobj)
    {
        cout << "Student copy ctor called" << endl;
        this->name = srcobj.name;
        this->age = srcobj.age;
        this->gf = srcobj.gf;
        // this->nos = srcobj.nos;
        this->present = srcobj.present;
        this->id = srcobj.id;
    }
 

void Study(){
    cout<<"Studing"<<endl;
}

 string getGfName()
    {
        return gf;
        // return this->gf;
    }


};

int main(){
  
// Student s(1, 12, 1, "Chota Bheem", 1, "Meenakshi");
// s.Study();
// cout<<s.age<<endl;
// cout<<s.getGfName()<<endl;


Student s1(1, 12, 1, "Chota Bheem", 7, "Meenakshi");
// Student s2;
Student s2 = s1;
// s2 = s1 ;

cout<<s2.id<<endl;
cout<<s2.name<<endl;
cout<<s2.nos<<endl;
cout<<s1.nos<<endl;



   
    return 0 ;
}