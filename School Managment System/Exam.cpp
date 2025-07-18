#include "Exam.h"
#include <iostream>

using namespace std;

Exam::Exam()
{
    examCode=0;
    examName="No Exam Name";
    examDate="No Exam Date";
}
Exam::Exam (int examCode,string examName,string examDate)
{
    this->examCode=examCode;
    this->examName=examName;
    this->examDate=examDate;
}
//Exam::~Exam()
void Exam::setExamCode(int examCode)
{
    this->examCode=examCode;
}
void Exam::setExamName(string examName)
{
    this->examName=examName;
}
void Exam::setExamDate(string examDate)
{
    this->examDate=examDate;
}
int Exam::getExamCode()
{
    return examCode;
}
string Exam::getExamName()
{
    return examName;
}
string Exam::getExamDate()
{
    return examDate;
}
void Exam::input()
{
    cout<<"Enter Exam Code : "<<endl;
    cin>>examCode;
    cout<<"Enter Exam Name : "<<endl;
    cin.ignore();
    getline(cin,examName);
    cout<<"Enter Exam Date : "<<endl;
    getline(cin,examDate);
}
void Exam::print()const
{
    cout<<"Exam Code is : "<<examCode<<endl;
    cout<<"Exam Name is : "<<examName<<endl;
    cout<<"Exam Date is : "<<examDate<<endl;
}
