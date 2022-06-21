#ifndef coach_h
#define coach_h
#include "user.hpp"
#include "student.hpp"
#include<iostream>
using namespace std;

class coach : public user
{
    private:
    string ID;
    student* stud;
    //Sport *sport;

    public:
    coach(string ID, student* stud): user(ID)
    {
        this->ID = ID;
        this->stud = stud; 
    }
    string getID()
    {
        return ID;
    }
    
    void display()
    {
        cout<<ID<<endl;
        stud->display();
    }
//Report getReport();

};

#endif