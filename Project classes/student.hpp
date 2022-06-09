#ifndef student_h
#define student_h
#include "user.hpp"
#include<iostream>
using namespace std;

class student : public user
{
    private:
    string matricNo;
    Sport sp;
    
    public:
    string setMatric(matricNo);
    string getMatric();
    Report getResult();

};

#endif