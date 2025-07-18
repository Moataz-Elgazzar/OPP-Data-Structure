#ifndef STAFF_H
#define STAFF_H
#include "Person.h"
#include <iostream>

using namespace std;

class Staff:public Person
{
private:
    string role;
    float salary;

public:
    void setRole(string role);
    void setSalary(float salary);
    string getRole();
    float getSalary();
    Staff();
    Staff (string role,float salary);
    Staff (string name,int id,int age,string gender,string address,string phoneNumber,string email
           ,int staffId,string role,float salary);
    void input()override;
    void print()const override;
    //virtual ~Staff();
};

#endif // STAFF_H
