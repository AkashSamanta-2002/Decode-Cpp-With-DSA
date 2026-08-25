#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int rno;
    float gpa;

    // Constructors
    Student(){      // Default Constructor

    }

    Student(string s, int r, float g){      // Parameterized constructor
        name = s;
        rno = r;
        gpa = g;
    }
};

void print(Student s){
    cout<<"Name : "<<s.name<<", Roll no. : "<<s.rno<<", CGPA : "<<s.gpa<<endl;
}

int main(){

    // By Parameterized constructor
    Student s1("Akash",10,7.5);
    
    // By Default Constructor
    Student s2;
    s2.name = "Aditya";
    s2.rno = 18;
    s2.gpa = 8.5;

    print(s1);
    print(s2);

    return 0;
}