#ifndef COURSE_H
#define COURSE_H
#include <iostream>

using namespace std;

class Course
{
private:
    string courseCode;
    string courseName;
    string teacherName;
public:
    void setCourseCode(string courseCode);
    void setCourseName(string courseName);
    void setTeacherName(string teacherName);
    string getCourseCode();
    string getCourseName();
    string getTeacherName();
    Course();
    Course (string courseCode,string courseName,string teacherName);
    void input();
    void print()const;
    //virtual ~Course();
};

#endif // COURSE_H
