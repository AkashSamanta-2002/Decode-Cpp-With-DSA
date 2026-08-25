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

    Student(string s, int r){      // Parameterized constructor
        name = s;
        rno = r;
    }

    Student(int r){      // Parameterized constructor
        rno = r;
    }
};

void print(Student s){
    cout<<"Name : "<<s.name<<", Roll no. : "<<s.rno<<", CGPA : "<<s.gpa<<endl;
}

int main(){

    // By Parameterized constructor with all 3 parameters
    Student s1("Akash",10,7.5);
    
    // By Default Constructor
    Student s2;
    s2.name = "Aditya";
    s2.rno = 18;
    s2.gpa = 8.5;

    Student s3("Argha",23);     // By Parameterized constructor with 2 parameter

    s3.gpa = 8.3;

    Student s4(65);             // By Parameterized constructor with only 1 parameter

    s4.name = "Ik";
    s4.gpa = 8.1;

    print(s1);
    print(s2);
    print(s3);
    print(s4);

    return 0;
}