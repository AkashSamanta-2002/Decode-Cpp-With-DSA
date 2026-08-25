#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int rno;
    float gpa;
};
int main(){
    Student s1, s2;

    s1.name, s1.rno, s1.gpa;
    s2.name, s2.rno, s2.gpa;

    cout<<"Enter name of student 1 : ";
    cin>>s1.name;
    cout<<"Enter name of student 2 : ";
    cin>>s2.name;
    
    s1.rno = 10;
    s1.gpa = 7.5;
    
    s2.rno = 14;
    s2.gpa = 8.5;


    cout<<"Name : "<<s1.name<<", Roll no. : "<<s1.rno<<", CGPA : "<<s1.gpa<<endl;
    cout<<"Name : "<<s2.name<<", Roll no. : "<<s2.rno<<", CGPA : "<<s2.gpa<<endl;
    return 0;
}