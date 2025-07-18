#include "Student.h"
#include <iostream>

using namespace std;

Student::Student()
{
    gradeLevel="No Grade Level";
    gpa=0;
    setType("Student");
}
Student::Student (string gradeLevel,float gpa)
{
    this->gradeLevel=gradeLevel;
    this->gpa=gpa;
    setType("Student");

}
Student::Student (string name,int id,int age,string gender,string address,string phoneNumber,string email
                  ,string gradeLevel,float gpa)
    :Person(name,id,"Student",age,gender,address,phoneNumber,email)
{
    this->gradeLevel=gradeLevel;
    this->gpa=gpa;
}
//Student::~Student()
void Student::setGradeLevel(string gradeLevel)
{
    this->gradeLevel=gradeLevel;
}
void Student::setGPa(float gpa)
{
    this->gpa=gpa;
}
string Student::getGradeLevel()
{
    return gradeLevel;
}
float Student::getGpa()
{
    return gpa;
}
void Student::input()
{
    Person::input();
    cout<<"Enter Grade Level : "<<endl;
    getline(cin,gradeLevel);
    cout<<"Enter Your GPA : "<<endl;
    cin>>gpa;
    cin.ignore();

}
void Student::print()const
{
    Person::print();
    cout<<"Grade Level is : "<<gradeLevel<<endl;
    cout<<"Gpa is : "<<gpa<<endl;
}
