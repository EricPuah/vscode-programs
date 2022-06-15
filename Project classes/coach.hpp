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
    Sport *sport;

    public:
    coach(string ID, student* stud)
    {
        this->ID = ID;
        this->stud = stud; 
    }
    string getID()
    {
        return ID;
    }
    
    Report getReport();

};