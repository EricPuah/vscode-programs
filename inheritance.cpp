#include <iostream>
using namespace std;

class parent1
{
    public:
    void display1()
    {
        cout<< "Display1" <<endl;
    }
};

class parent: public parent1
{
    public:
    parent(int p=0)
    {
        cout<<"Parent's constructor"<<p<<endl;
    }
    void display()
    {
        cout<<"Display from parent class"<<endl;
    }

};

class child: public parent
{
    public:
    child(int c):parent (c) //inline style
    {
        cout<<"Child constructor"<<c<<endl;
    }
    child();//not inline, prototype

    void display()
    {
        cout<<"Display from child class"<<endl;
    }
};

child::child() :parent(55)
{
    cout<<"sohai"<<endl;
}
int main()
{
    child c1(4);
    c1.display1();
   // parent p;
    
    system ("pause");
    return 0;
}