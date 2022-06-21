#ifndef student_h
#define student_h
#include "user.hpp"
#include<iostream>
#include<typeinfo>
using namespace std;

class student : public user
{
    private:
    string name, ID;
    int age;
    double height,weight;
   // Sport* sp;
    
    public:
    student():user(ID)
    {
       
    };
    student(string ID, string name,int age, double weight, double height): user(ID)
    {
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->height = height;
        this->ID = ID;
    } 
    string getID()
    {
        return ID;
    }
   // Report getReport();
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
    void display()
    {
        cout<<name<<endl;
        cout<<ID<<endl;
        cout<<age<<endl;
        cout<<weight<<endl;
        cout<<height<<endl;
    }
    void inputStudent()
    {
        do
        {
            cout<<"Enter your name: ";
            try
            {
                getline(cin,name);
                if (typeid(name) != typeid(string))
                {
                    throw "tryagain";
                }
            }
            catch(int)
            {
                cout<<"Invalid name, please try again";
            }
        } while (typeid(name) != typeid(string));
        
        do
        {
            cout<<"Enter your ID: ";
            try
            {
                getline(cin,ID);
                if (!cin)
                {
                    throw "tryagain";
                }
            }
            catch(...)
            {
                cout<<"Invalid ID, please try again";
            }
        } while (typeid(ID) != typeid(string));
        
        do
        {
            cout<<"Enter your age: ";
            cin>>age;
            try 
            {
                if (typeid(age) != typeid(int))
                {
                    throw "tryagain";
                }
            }
            catch(...)
            {
                cout<<"Invalid age, please try again";
            }
        } while (typeid(age) != typeid(int));

        do
        {
            cout<<"Enter your weight: ";
            cin>>weight;
            try 
            {
                if (typeid(weight) != typeid(double))
                {
                    throw "tryagain";
                }
            }
            catch(...)
            {
                cout<<"Invalid weight, please try again";
            }
        } while (typeid(weight) != typeid(double));  

        do
        {
            cout<<"Enter your weight: ";
            cin>>height;
            try 
            {
                if (typeid(height) != typeid(double))
                {
                    throw "tryagain";
                }
            }
            catch(...)
            {
                cout<<"Invalid height, please try again";
            }
        } while (typeid(height) != typeid(double));  
    }

};



#endif