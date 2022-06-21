#ifndef user_h
#define user_h
#include <iostream>
using namespace std;

class user
{
    private:
     string ID;


    public:
    user(string ID)
    {
        this->ID = ID;
    }
    virtual string getID()=0;
    virtual void display()=0;
 
};
#endif