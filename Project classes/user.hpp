#ifndef user_h
#define user_h
#include <iostream>
using namespace std;

class user
{
    private:
    string name;
    int age;
    double height,weight;

    public:
    string setName(string);
    int setAge(int);
    double setHeight(double);
    double setWeight(double);
    string getName();
    double getAge();
    double getHeight();
    double getWeight();
};

#endif