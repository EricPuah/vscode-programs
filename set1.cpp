#include<iostream>
using namespace std;

class Point
{
    private:
    int x,y;

    public:
    Point(int _x,int _y)
    {
        x = _x;
        y = _y;
    }

    Point(const Point & pointed)
    {
        x = pointed.x;
        y = pointed.y;
    }

    void display()
    {
        cout<< "x =  "<<x<< "y =  "<< y<<endl;
    }
    void display(string str)
    {
        cout<< str << "x =  "<<x<< "y =  "<< y<<endl;
    }
    Point operator + (Point p)
    {
        Point temp(0,0);
        temp.x = x + p.x;
        temp.y = y + p.y;
        return temp;
    }

    friend double slope(Point p1, Point p2);

};

double slope(Point p1, Point p2)
{
    return (p2.y-p1.y)/(p2.x-p1.x);
}

int main()
{
   Point p1(1,2);
   Point p2(3,4);
   Point p3(0,0);

   p1.display();
   p2.display();
   p3=p1+p2;
   p3.display("Third Point: ");
   cout<< "Slope: "<< slope <<endl;

   system ("pause");

   return 0;
}
