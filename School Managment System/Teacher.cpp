#include "Teacher.h"
#include <iostream>

using namespace std;

Teacher::Teacher()
{
    subjectSpecialization="No Subject Specialization";
    salary=0;
    setType("Teacher");
}
Teacher::Teacher (string subjectSpecialization,float salary)
{
    this->subjectSpecialization=subjectSpecialization;
    this->salary=salary;
    setType("Teacher");
}
Teacher::Teacher (string name,int id,int age,string gender,string address,string phoneNumber,string email
                  ,int teacherId,string subjectSpecialization,float salary)
    :Person(name,id,"Teacher",age,gender,address,phoneNumber,email)
{
    this->subjectSpecialization=subjectSpecialization;
    this->salary=salary;
}
//Teacher::~Teacher()
void Teacher::setSubjectSpecialization(string subjectSpecialization)
{
    this->subjectSpecialization=subjectSpecialization;
}
void Teacher::setSalary(float salary)
{
    this->salary=salary;
}
string Teacher::getSubjectSpecialization()
{
    return subjectSpecialization;
}
float Teacher::getSalary()
{
    return salary;
}
void Teacher::input()
{
    Person::input();
    cout<<"Enter Subject Specialization : "<<endl;
    cin.ignore();
    getline(cin,subjectSpecialization);
    cout<<"Enter Your Salary : "<<endl,
    cin>>salary;
}
void Teacher::print()const
{
    Person::print();
    cout<<"Subject Specialization is : "<<subjectSpecialization<<endl;
    cout<<"salary is : "<<salary<<endl;
}
