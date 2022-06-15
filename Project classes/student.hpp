#ifndef student_h
#define student_h
#include "user.hpp"
#include<iostream>
using namespace std;

class student : public user
{
    private:
    string name, matricNo;
    int age;
    double height,weight;
    Sport* sp;
    
    public:
    student(string name, int age, double weight, double height, string ID)
    {
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->height = height;
        this->ID = matricNo;
    } 
    string getID()
    {
        return matricNo;
    }
    Report getReport();
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    double getHeight()
    {
        return height;
    }
    double getWeight()
    {
        return weight;
    }
};


#endif