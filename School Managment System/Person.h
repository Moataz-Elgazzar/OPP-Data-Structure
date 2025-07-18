#ifndef PERSON_H
#define PERSON_H
#include <iostream>

using namespace std;

class Person
{
    private:
        string name;
        int id;
        int age;
        string gender;
        string address;
        string phoneNumber;
        string email;
    protected:
        string type;
    public:
        void setName(string name);
        void setID(int id);
        void setAge(int age);
        void setGender(string gender);
        void setAddress(string address);
        void setPhoneNumber(string phoneNumber);
        void setEmail(string email);
        void setType(string type);
        string getName();
        int getID();
        int getAge();
        string getGender();
        string getAddress();
        string getPhoneNumber();
        string getEmail();
        string getType()const;
        Person();
        Person(string name,int id,string type,int age,string gender,string address,string phoneNumber,string email);
        virtual ~Person();
        virtual void input();
        virtual void print()const;//search (const)
        virtual void edit();//search
        //virtual ~Person();
};

#endif // PERSON_H
