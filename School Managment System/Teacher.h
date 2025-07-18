#ifndef TEACHER_H
#define TEACHER_H
#include "Person.h"
#include <iostream>

using namespace std;

class Teacher:public Person
{
private:
    string subjectSpecialization;
    float salary;

public:
    void setSubjectSpecialization(string subjectSpecialization);
    void setSalary(float salary);
    string getSubjectSpecialization();
    float getSalary();
    Teacher();
    Teacher (string subjectSpecialization,float salary);
    Teacher (string name,int id,int age,string gender,string address,string phoneNumber,string email
             ,int teacherId,string subjectSpecialization,float salary);
    void input()override;
    void print()const override;
    //virtual ~Teacher();
};

#endif // TEACHER_H
