#ifndef EXAM_H
#define EXAM_H
#include <iostream>

using namespace std;

class Exam
{
private:
    int examCode;
    string examName;
    string examDate;
public:
    void setExamCode(int examCode);
    void setExamName(string examName);
    void setExamDate(string examDate);
    int getExamCode();
    string getExamName();
    string getExamDate();
    Exam();
    Exam (int examCode,string examName,string examDate);
    void input();
    void print()const;
    //virtual ~Exam();
};

#endif // EXAM_H
