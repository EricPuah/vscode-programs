#include<iostream>
#include<cmath>
using namespace std;

class Particle
{
    private:
    int x,y,z;
    int r;

    public:
    Particle(){};
    void read(int _x,int _y, int _z, int _r)
    {
        x=_x;
        y=_y;
        z=_z;
        r=_r;
    }
    void print()
    {
        cout<<"Center: ("<<x<<","<<y<<","<<z<<") "<<endl;
        cout<<"Radius: "<<r<<endl;
    } 
    double operator- (Particle p)
    {
        return sqrt(pow((p.x-x),2) + pow((p.y-y),2) + pow((p.z-z),2));  
    }
    friend bool collision (Particle,Particle);
};

bool collision(Particle a, Particle b)
{
    int total;
    double d;

    d = a-b;
    total = a.r + b.r;
    if (d<=total)
    {
        return true;
    }
    if (d>=total)
    {
        return false;
    }
}

int main()
{
    int _x,_y,_z,_r;
    bool result;
    Particle p1;
    cout<<"Enter the data for the first particle: "<<endl;
    cout<< "Center: ";
    cin>>_x>>_y>>_z;
    cout<<"Radius: ";
    cin>>_r;
    p1.read(_x,_y,_z,_r);
    
    Particle p2;
    cout<<"Enter the data for the second particle: "<<endl;
    cout<< "Center: ";
    cin>>_x>>_y>>_z;
    cout<<"Radius: ";
    cin>>_r;
    p2.read(_x,_y,_z,_r);
    
    result = collision(p1,p2);
    if (result)
    {
        cout<<"The particles are colliding."<<endl<<endl;
        cout<<"First particle: "<<endl;
        p1.print();
        cout<<"Second Particle: "<<endl;
        p2.print();
    }
    else
    {
        cout<<"No collision detected"<<endl;
    }
    
    system ("pause");

    return 0;
}