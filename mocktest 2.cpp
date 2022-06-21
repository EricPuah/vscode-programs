#include <iostream>
using namespace std;

class Point
{
    private:
    double x,y;

    public:
    Point(double _x=0,double _y=0)
    {
       x=_x;
       y=_y;
    }

    double getX()
    {
        return x;
    }

    double getY()
    {
        return y;
    }

    void setX(double _x)
    {
        x = _x;
    }

    void setY(double _y)
    {
        y = _y;
    }
   
   Point operator +(Point pRight)
   {
      Point temp(0,0);
       temp.x = x + pRight.x;
       temp.y = y + pRight.y;

       return temp; //or return Point(x + pRight.x, y + pRight.y);
   }

   Point operator /(float pDivider)
   {
       return Point(x/pDivider, y/pDivider);
   }
};

int main()
{
    int numPoints;
    
    cout<< "how many cibai points u want: ";
    cin>> numPoints;

    Point p[numPoints];
    Point temporary;

    double x,y;

    cout<< "Point\t\tx\t\ty"<<endl;
    for(int i=0;i<numPoints; i++)
    {
        cout<< "what ur x and y: ";
        cin>> x >>y;
        p[i].setX(x);
        p[i].setY(y);
        temporary= temporary + p[i];
        cout<< i+1 << "\t\t" <<p[i].getX()<< "\t" << p[i].getY() << endl;
    }

    temporary = temporary / (float) numPoints;

    cout<< "\nMid Point is\t "<< temporary.getX()<< "\t"<< temporary.getY() << endl;

    system ("pause");

    return 0;

    
}