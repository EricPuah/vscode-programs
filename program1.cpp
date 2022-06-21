// Problem 1

#include <iostream>
#include <string>
using namespace std;

class Address
{
private:
    string area;
    string city;
    string state;
    string postCode;

public:
    Address(string _area = "", string _city = "",
            string _state = "", string _postCode = "")
        : area(_area), city(_city),
          state(_state), postCode(_postCode) {}

    string getArea() const { return area; }
    string getCity() const { return city; }
    string getState() const { return state; }
    string getPostCode() const { return postCode; }
};

class Student
{
private:
    string name;
    string matric;
    Address add;

public:
    Student(string _name = "", string _matric = "")
        : name(_name), matric(_matric), add("UTM","Skudai","Johor","81310") {}
    string getName() const { return name; }
    string getMatric() const { return matric; }

    void print() const
    {
        cout << "Name  : " << name << endl;
        cout << "Matric: " << matric << endl;
        cout << "Address: " << endl;
        cout << "   Area     : " << add.getArea()<< endl;
        cout << "   City     : " << add.getCity()<<endl;
        cout << "   State    : " << add.getState()<<endl;
        cout << "   Post Code: " << add.getPostCode()<<endl;
    }
};

int main()
{
    //! Create an object of Student with an address
    Student stud;

    stud.print();

    system("pause");
    return 0;
}