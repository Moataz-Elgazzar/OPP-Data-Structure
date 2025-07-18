#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "Staff.h"
#include "Course.h"
#include "Exam.h"
#include "ClassRoom.h"
#include <iostream>
#include <vector> //Search

using namespace std;

Person* searchByID(const vector<Person*>&People,int id);//search
void deleteByID(vector<Person*>&People,int id);//search
int main()
{
    vector<Person*>People;
    vector<ClassRoom>ClassRooms;
    vector<Course>Courses;
    vector<Exam>Exams;
    int choice;
    do
    {
        cout <<"\n===== School Management System ====="<<endl;
        cout<<"===Menu==="<<endl;
        cout<<"1.Students"<<endl;
        cout<<"2.Teachers"<<endl;
        cout<<"3.Staff"<<endl;
        cout<<"4.Class Room"<<endl;
        cout<<"5.Course"<<endl;
        cout<<"6.Exam"<<endl;
        cout<<"7.Display All Data"<<endl;
        cout<<"8.Search By ID"<<endl;
        cout<<"9.Edit By ID"<<endl;
        cout<<"10.Delete BY ID"<<endl;
        cout<<"0.Exit"<<endl;
        cout<<"Enter Your Choice"<<endl;
        cin>>choice;
        cin.ignore();
        switch(choice)
        {
        case 1:
        {
            Person*S=new Student;
            S->input();
            People.push_back(S);
            break;
        }
        case 2:
        {
            Person*T=new Teacher;
            T->input();
            People.push_back(T);
            break;
        }
        case 3:
        {
            Person*M=new Staff;
            M->input();
            People.push_back(M);
            break;
        }
        case 4:
        {
            ClassRoom R;
            R.input();
            ClassRooms.push_back(R);
            break;
        }
        case 5:
        {
            Course C;
            C.input();
            Courses.push_back(C);
            break;
        }
        case 6:
        {
            Exam E;
            E.input();
            Exams.push_back(E);
            break;
        }
        case 7:
        {
            cout<<"\n===== Students, Teachers, and Staff ====="<<endl;
            for(Person*P:People)
            {
                P->print();
                cout<<"----------------------"<<endl;
            }
            cout<<"\n===== Classrooms ====="<<endl;
            for(const ClassRoom& R : ClassRooms)
            {
                R.print();
                cout<<"----------------------"<<endl;
            }
            cout<<"\n===== Courses ====="<<endl;
            for(const Course& C :Courses)
            {
                C.print();
                cout<<"----------------------"<<endl;
            }
            cout << "\n===== Exams =====" << endl;
            for(const Exam& E :Exams)
            {
                E.print();
                cout<<"----------------------"<<endl;
            }
            break;
        }
        case 8:
        {
            int searchID;
            cout<<"Enter ID"<<endl;
            cin>>searchID;
            Person*found=searchByID(People,searchID);
            if (found)
            {
                cout<<"###Person Found###"<<endl;
                found->print();
            }
            else
            {
                cout<<"This ID Not Found"<<endl;
            }
            break;
        }
        case 9:
        {
            int editId;
            cout<<"Enter ID"<<endl;
            cin>>editId;
            Person*found=searchByID(People,editId);
            if(found)
            {
                found->edit();
            }
            else
                cout<<"This ID Not Found"<<endl;
            break;
        }
        case 10:
        {
            int deletId;
            cout<<"Enter ID"<<endl;
            cin>>deletId;
            deleteByID(People,deletId);
            break;
        }
        case 0:
            cout<<"Exiting program..."<<endl;
            break;
        default:
            cout<<"Invalid choice"<<endl;
            break;
        }
    }
    while (choice!=0);
    for(Person*P:People)
    {
        delete P;
    }
    People.clear();
    return 0;
}
Person* searchByID(const vector<Person*>&People,int id)
{
    for(Person*P:People)
    {
        if(P->getID()==id)
        {
            return P;
        }
    }
    return nullptr;
}
void deleteByID(vector<Person*>&People,int id)
{
    for(auto it=People.begin(); it!=People.end(); it++)
    {
        if((*it)->getID()==id)
        {
            delete*it;
            People.erase(it);
            cout<<"###Person Deleted Successfully###"<<endl;
            return;
        }
    }
    cout<<"ID Not Found"<<endl;
}
