// Programming Technique II (SECSJ1023)
// Semester 2, 2021/2022

// Skill-Based Test (Practical)

// Student's Name:Puah Jun Hong
// Matric Number:A21EC0221
// Location:.Kulai, Johor (e.g. area and state name if in malaysia, or country name if outside Malaysia)

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Line
{
private:
	int m, c;

public:
    Line(int m = 1, int c = 0);
    void read(int _m, int _c)
    {
        m = _m;
		c = _c;
    }
	Line operator -(Line l)
	{
		Line temp;
		temp.m = m - l.m;
		temp.c = c - l.c;
		return temp;
	}
	bool operator !=(Line l)
	{
		bool ppp;
		if((m*l.m)==-1)
		{
            return true;
		}
		else
		{
			return false;
		}
	}
	string toString()
	{
		string abc;
		string _m = to_string(m);
	    string _c = to_string(c);
		if ((_m==1) && (_c<0))
		{
			abc = ("y=x") + c;
		}
		else if ((_m==1) && (_c==0))
		{
			abc = ("y=x");
		}
		else if ((_m==1) && (_c>0))
		{
			abc = ("y=x+") + c;
		}
		else if ((_m==-1) && (_c<0))
		{
			abc = ("y=-x") + c;
		}
		else if ((_m==-1) && (_c==0))
		{
			abc = ("y=-x");
		}
		else if ((_m==-1) && (_c>0))
		{
			abc =  ("y=-x+") + c;
		}
		else if ((_m!=-1||1) && (_c<0))
		{
			abc = ("y=x") + c;
		}
		else if ((_m!=-1||1) && (_c==0))
		{
			abc =("y=x");
		}
		else if ((_m!=-1||1) && (_c<0))
		{
			abc =  ("y=x-") + c;
		}
		return abc;
	} 
	friend void printLines(Line lines[5]);
};


// This function is partially given.
void printLines(Line lines[5])
{
	cout << endl;
	for (int i = 0; i < 3; i++){
        cout << "Line "<< i+1 << "slope(m) = "<< lines[i].m <<", y-intercept(c) = "<<lines[i].c<<", equation: "<< lines[i].toString()<<endl;
	}
	cout << endl;
}

int main()
{
	Line lines[3]={{1,5},{},{}};
	printLines(lines);

    int _m, _c;
	cout<<"Set the second line from user input"<<endl;
	cout<<"Enter the slope (m) and y-intercept of a line (c) => ";
	cin>> _m >>_c;
	lines[1].read(_m,_c);
    lines[2]=lines[0]-lines[1];
	printLines(lines);

	if(lines[0]!=lines[2])
	{
		cout<<"The first line is not perpendicular to the last line"<<endl;
	}
	else
	{
		cout<<"The first line is perpendicular to the last line"<<endl;
	}

	cout << endl;
	system("pause"); // ! remove this line if you are using Dev C++
	return 0;
}
