#include "ClassRoom.h"
#include <iostream>

using namespace std;

ClassRoom::ClassRoom()
{
    roomNumber=0;
    capacity=0;
}
ClassRoom::ClassRoom (int roomNumber,int capacity)
{
   this->roomNumber=roomNumber;
   this->capacity=capacity;
}
//ClassRoom::~ClassRoom()
void ClassRoom::setRoomNumber(int roomNumber)
{
    this->roomNumber=roomNumber;
}
void ClassRoom::setCapacity(int capacity)
{
    this->capacity=capacity;
}
int ClassRoom::getRoomNumber()
{
    return roomNumber;
}
int ClassRoom::getCapacity()
{
    return capacity;
}
void ClassRoom::input()
{
    cout<<"Enter Room Number : "<<endl;
    cin>>roomNumber;
    cout<<"Enter Capacity : "<<endl;
    cin>>capacity;
}
void ClassRoom::print()const
{
    cout<<"Room Number is : "<<roomNumber<<endl;
    cout<<"Capacity is : "<<capacity<<endl;
}
