#ifndef coach_h
#define coach_h
#include "user.hpp"
#include<iostream>
using namespace std;

class coach : public user
{
    private:
    string ID;
    Student std;
    Sport *sport;

    public:
    string setID(string);
    string getID();
    Report getReport();
}