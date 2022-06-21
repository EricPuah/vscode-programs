#include<iostream>
#include<iomanip>
using namespace std;

class Cat
{
    private:
        string name;
        int age;
        int yearAdopt;

    public:
        Cat(){}
        Cat(string n, int a, int y)
        {
            name = n;
            age = a;
            yearAdopt = y;
        }

        string getName()
        {
            return name;
        }

        int getAge()
        {
            return age;
        }

        int calcNumOfYear()
        {
            return 2022-yearAdopt;
        }

};

class Person
{
    private:
        string name;
        string address;
        int count;
        Cat *myCat; //show Aggregation

    public:
        Person(string n, string a)
        {
            name = n;
            address = a;
            count = 0;
            myCat = new Cat[3];
        }

        void adopt(Cat c)
        {
            myCat[count]= c;
            count++;
        }

        void print()
        {
            cout<< "Owner name: "<< name <<endl;
            cout<< "Owner address: " << address << endl;
            cout<< "Number of cats adopted: "<< count <<endl;
            cout<< "List of cats"<<endl;

            for (int i=0; i < count; i++)
            {
                cout << i+1 << ") " << left << setw(10)
                     << myCat[i].getName() <<setw(6)
                     << myCat[i].getAge()
                     << myCat[i].calcNumOfYear()<<endl;
            } 
        }
};

int main()
{
    Person p("sohai", "Skudai, JB");
    Cat c1("bitch", 2, 2018);
    Cat c2("bullshit", 4, 2020);

    p.adopt(c1);
    p.adopt(c2);
    p.print();

    system("pause");

    return 0;
}