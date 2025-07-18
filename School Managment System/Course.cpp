#include "Course.h"

Course::Course()
{
    courseCode="NO Course Code";
    courseName="No Course Name";
    teacherName="No Teacher Name";
}
Course::Course (string courseCode,string courseName,string teacherName)
{
    this->courseCode=courseCode;
    this->courseName=courseName;
    this->teacherName=teacherName;
}
//Course::~Course()
void Course::setCourseCode(string courseCode)
{
    this->courseCode=courseCode;
}
void Course::setCourseName(string courseName)
{
    this->courseName=courseName;
}
void Course::setTeacherName(string teacherName)
{
    this->teacherName=teacherName;
}
string Course::getCourseCode()
{
    return courseCode;
}
string Course::getCourseName()
{
    return courseName;
}
string Course::getTeacherName()
{
    return teacherName;
}
void Course::input()
{
    cout<<"Enter Course Code : "<<endl;
    cin>>courseCode;
    cout<<"Enter Course Name : "<<endl;
    cin.ignore();
    getline(cin,courseName);
    cout<<"Enter Teacher Name : "<<endl;
    getline(cin,teacherName);
}
void Course::print()const
{
    cout<<"Course Code is : "<<courseCode<<endl;
    cout<<"Course Name is : "<<courseName<<endl;
    cout<<"Teacher Name is : "<<teacherName<<endl;
}
