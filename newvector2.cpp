#include<iostream>
#include<vector>
using namespace std;

class Point
{
    int x,y;

    public:
    Point(int _x=0, int _y=0): x(_x), y(_y){}
    void show()
    {
        cout<<"Point: ("<<x<<", "<<y<<") "<<endl;
    }
};

int main()
{
    vector <Point> v1;

    cout<<"Size of v1: "<<v1.size()<<endl;

    v1.push_back(Point(1,2));
    v1.push_back(Point());

    Point p(5,1);
    v1.push_back(p);

    for(int i=0;i<v1.size();i++)
    {
        v1.at(i).show();
    }

    system("pause");
    return 0;
}    
    