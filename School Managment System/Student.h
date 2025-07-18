#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
#include <iostream>

using namespace std;

class Student:public Person
{
private:
    string gradeLevel;
    float gpa;

public:
    void setGradeLevel(string gradeLevel);
    void setGPa(float gpa);
    string getGradeLevel();
    float getGpa();
    Student();
    Student (string gradeLevel,float gpa);
    Student (string name,int id,int age,string gender,string address,string phoneNumber,string email
             ,string gradeLevel,float gpa);
    void input()override;
    void print()const override;
    //virtual ~Student();
};

#endif // STUDENT_H
