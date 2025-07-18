#ifndef CLASSROOM_H
#define CLASSROOM_H
#include <iostream>

using namespace std;

class ClassRoom
{
private:
    int roomNumber;
    int capacity;
public:
    void setRoomNumber(int roomNumber);
    void setCapacity(int capacity);
    int getRoomNumber();
    int getCapacity();
    ClassRoom();
    ClassRoom (int roomNumber,int capacity);
    void input();
    void print()const;
    //virtual ~ClassRoom();
};

#endif // CLASSROOM_H
