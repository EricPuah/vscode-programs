// Programming Technique II (SECSJ1023)
// Semester 2, 2021/2022

// Skill-Based Test (Practical)

// Student's Name: WONG WEI MING
// Matric Number: A21EC0145
// Location: UTM, SKUDAI, JOHOR. (e.g. area and state name if in malaysia, or country name if outside Malaysia)

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Line
{
private:
	int m, c;

public:
	Line(int _m=1, int _c=0){
		m = _m;
		c = _c;
	}
	
	void read(){
		cout << "Set the second line from user input" << endl
			 << "Enter the slope (m) and y-intercept of a line (c) => ";
		cin >> m >> c;
	}
	
	Line operator-(Line l2){
		Line temp;
		
		temp.m = m - l2.m;
		temp.c = c - l2.c;
		
		return temp;
	}
	
	bool operator!=(Line s2){
		if((m*s2.m)==-1)
			return true;
		
		return false;
	}
	
	string toString(){
		
		string _m = to_string(m);
		string _c = to_string(c);
		string equa;
		
		if((m==1)&&(c>0))
			equa ="y=x+"+_c;
		
		else if((m==1)&&(c==0))
			equa ="y=x";
		
		else if((m==1)&&(c<0))
			equa ="y=x"+_c;
		
		else if((m==-1)&&(c>0))
			equa ="y=-x+"+_c;
		
		else if((m==-1)&&(c==0))
			equa ="y=-x";
		
		else if((m==-1)&&(c<0))
			equa ="y=-x"+_c;
		
		else if(c>0)
			equa ="y="+_m+"x+"+_c;
		
		else if(c==0)
			equa ="y="+_m+"x";
		
		else if(c<0)
			equa ="y="+_m+"x"+_c;

		return equa;
		}
		
		friend void printLines(Line lines[]);

};


// This function is partially given.
void printLines(Line lines[])
{
	cout << endl;
	for (int i = 0; i < 3; i++){
		cout << "slope(m) = " << lines[i].m 
			 << ", y-intercept = " << lines[i].c
			 << ", equation: " << lines[i].toString() <<endl;
	}
	cout << endl;
}

int main()
{
	Line lines[3] = {{1,5}};
	cout << "ORIGINAL LINES";
	printLines(lines);
	
	lines[1].read();
	
	lines[2] = lines[0] - lines[1];
	
	cout << "\nUPDATED LINES";
	printLines(lines);
	
	if(lines[0] != lines[2])
		cout << "The first line is perpendicular to the last line" << endl;
	
	else
	 	cout << "The first line is not perpendicular to the last line" << endl;
	
	

	cout << endl;
	system("pause"); // ! remove this line if you are using Dev C++
	return 0;
}
