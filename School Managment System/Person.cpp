#include "Person.h"
#include <iostream>

using namespace std;
Person::Person()
{
    name="NO Name";
    id=0;
    age=0;
    type="No Type";
    gender="No Gender";
    address="No Address";
    phoneNumber="No Phone Number";
    email="No Email";
}
Person::Person(string name,int id,string type,int age,string gender,string address,string phoneNumber,string email)
{
    this->name=name;
    this->id=id;
    this->age=age;
    setType(type);
    this->gender=gender;
    this->address=address;
    this->phoneNumber=phoneNumber;
    this->email=email;
}
Person::~Person()
{
    cout << "****Person Destructor Called****" << endl;
}
void Person::setName(string name)
{
    this->name=name;
}
void Person::setID(int id)
{
    this->id=id;
}
void Person::setAge(int age)
{
    this->age=age;
}
void Person::setType(string type)
{
    this->type=type;
}
void Person::setGender(string gender)
{
    this->gender=gender;
}
void Person::setAddress(string address)
{
    this->address=address;

}
void Person::setPhoneNumber(string phoneNumber)
{
    this->phoneNumber=phoneNumber;
}
void Person::setEmail(string email)
{
    this->email=email;
}
string Person::getName()
{
    return name;
}
int Person::getID()
{
    return id;
}
int Person::getAge()
{
    return age;
}
string Person::getType()const
{
    return type;
}
string Person::getGender()
{
    return gender;
}
string Person::getAddress()
{
    return address;
}
string Person::getPhoneNumber()
{
    return phoneNumber;
}
string Person::getEmail()
{
    return email;
}
void Person::input()
{
    cout<<"Enter Name :"<<endl;
    getline(cin,name);
    cout<<"Enter ID :"<<endl;
    cin>>id;
    cin.ignore();
    cout<<"Enter Age :"<<endl;
    cin>>age;
    cin.ignore();
    cout<<"Type :"<<getType()<<endl;
    cout<<"Enter Gender"<<endl;
    getline(cin,gender);
    cout<<"Enter Address :"<<endl;
    getline(cin,address);
    cout<<"Enter Phone Number :"<<endl;
    getline(cin,phoneNumber);
    cout<<"Enter Email :"<<endl;
    getline(cin,email);
}
void Person::print()const
{
    cout<<"Name is : "<<name<<endl;
    cout<<"ID is : "<<id<<endl;
    cout << "Type: " << type << endl;
    cout<<"Age is : "<<age<<endl;
    cout<<"Gender is : "<<gender<<endl;
    cout<<"Address is : "<<address<<endl;
    cout<<"Phone Number is : "<<phoneNumber<<endl;
    cout<<"Email is : "<<email<<endl;
}
void Person::edit()
{
    int choice;
    do
    {
        cout<<"\n====Edit Menu===="<<endl;
        cout<<"1.Edit Name"<<endl;
        cout<<"2.Edit Age"<<endl;
        cout<<"3.Edit Address"<<endl;
        cout<<"0.Exist"<<endl;
        cout<<"Enter Choice"<<endl;
        cin>>choice;
        cin.ignore();
        switch(choice)
        {
        case 1:
        {
            cout<<"Enter New Name:"<<endl;
            getline(cin,name);
            break;
        }
        case 2:
        {
            cout<<"Enter New Age:"<<endl;
            cin>>age;
            break;
        }
        case 3:
        {
            cout<<"Enter New Address:"<<endl;
            getline(cin,address);
            break;
        }
        default:
            cout<<"Invalid Input"<<endl;
        case 0:
            return;
        }
    }while(choice!=0);
}
