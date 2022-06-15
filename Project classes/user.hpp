#ifndef user_h
#define user_h
#include <iostream>
using namespace std;

class user
{
    private:
     string ID;


    public:
    virtual string getID()=0;
 
};
#endif