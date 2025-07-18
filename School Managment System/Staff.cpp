#include "Staff.h"
#include <iostream>

using namespace std;

Staff::Staff()
{
    role="No Role";
    salary=0;
    setType("Staff Member");
}
Staff::Staff (string role,float salary)
{
    this->role=role;
    this->salary=salary;
    setType("Staff Member");
}
Staff::Staff (string name,int id,int age,string gender,string address,string phoneNumber,string email
              ,int staffId,string role,float salary)
    :Person(name,id,"Staff Member",age,gender,address,phoneNumber,email)
{
    this->role=role;
    this->salary=salary;
}
//Staff::~Staff()
void Staff::setRole(string role)
{
    this->role=role;
}
void Staff::setSalary(float salary)
{
    this->salary=salary;
}
string Staff::getRole()
{
    return role;
}
float Staff::getSalary()
{
    return salary;
}
void Staff::input()
{
    Person::input();
    cout<<"Enter Role : "<<endl;
    cin.ignore();
    getline(cin,role);
    cout<<"Enter Salary : "<<endl;
    cin>>salary;
}
void Staff::print()const
{
    Person::print();
    cout<<"Role is : "<<role<<endl;
    cout<<"salary is : "<<salary<<endl;
}
