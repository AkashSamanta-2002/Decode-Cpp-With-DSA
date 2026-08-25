#include<iostream>
using namespace std;
class Student{
public:         // Public Access Modifire
    string name;
    int rno;

    // Constructors
    Student(){      

    }

    Student(string name, int rno, float gpa){ // Here we can access gpa because the constructor is in class
        this->name = name;
        this->rno = rno;
        this->gpa = gpa;
    }

    float getGpa(){     // Getter function
        return gpa;
    }
    
    void setGpa(float gpa){     // Setter function
        this->gpa = gpa;
    }

private:    // Private Access Moodifire
   float gpa;
};

int main(){
    //Student s1;
    // s1.name = "Akash";
    // s1.rno = 10;
    //s1.gpa = 7.5;       // Gives error because public atribute
    
    Student s1("Akash",10,7.5); // Valid because the constructor is in public domain

    //cout<<s1.gpa; // Error beacuse gpa is in private

    cout<<s1.getGpa()<<endl;    // By getter function

    s1.setGpa(7.3);     // By setter function

    cout<<s1.getGpa()<<endl;

    return 0;
}