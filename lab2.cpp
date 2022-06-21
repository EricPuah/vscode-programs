// Luvinesh Sudesh A21EC019
// Puah Jun Hong A21EC0221
// Edip Uslu A20EC3015

#include<iostream>
#include<cmath>
using namespace std;

class Point  
{
    private:
    int x,y;
    
    public:
    Point(int _x,int _y)
    {
        x=_x;
        y=_y;
    }
    
    void display()
    {
        cout<<"("<<x<<","<<y<<")"<<endl;  
    } 
    
    void display(string b)  
    {
        cout << b << " = " <<"("<< x << " , " << y << ")" << endl;
    }
    
    Point operator+ (Point p) 
    {
    Point temp (0,0);
    temp.x = x + p.x;
    temp.y = y + p.y;
    return temp;
    }

    double operator- (Point p)
    {
        return sqrt(pow(p.x-x, 2 ) + pow(p.y-y, 2));    //𝑑 = √(𝑥2−𝑥1)2 +(𝑦2−𝑦1)2
    }
    
    friend double calcSlope(Point, Point);
};

    double calcSlope(Point p1, Point p2)
    {
        double slope;
        slope = (p2.y - p1.y) /(double)(p2.x - p1.x);   
        //𝑠𝑙𝑜𝑝𝑒 = y2 − y1 divided by x2−x1
        return slope;
    }
    
int main()
    {
      
        Point P1(1,3);
        P1.display();
        Point P2(4,7);
        P2.display();
        Point P3 = P1 + P2;
        P3.display("Third point");
        double slope = calcSlope (P1, P2);
        
        cout <<" Distance =" << P1 - P2 << endl; 
        cout << "Slope =" << slope <<endl;
         
        
        system("pause");
        return 0;
    }