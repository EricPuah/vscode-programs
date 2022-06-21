#include <iostream>
using namespace std;

// Task 1: Complete the definition of class Date.
class Date 
{
	private: 
		string description;
		int day;
		int month;
		int year;
	
	public:	
		Date(string a = " ", int b=0, int c=0, int d=0)
		{
			description = a;
			day = b;
			month = c;
			year = d;
		}
		int getDay()
		{
			return day;
		}
		int getMonth()
		{
			return month;
		}
		int getYear()
		{
			return year;
		}
		Date operator-(Date d)
		{
			Date temp;
			temp.day = d.day - day;
			temp.month = d.month - month;
			temp.year = d.year - year;
			return temp;
		}
	
	friend istream& operator>>(istream&, Date&);
	friend ostream& operator<<(ostream&, Date&);

};
istream& operator>>(istream& input, Date &obj)
{
	cout << "Enter your date (day, month, year): ";
	input >> obj.day >> obj.month >> obj.year;
	return input;
}

ostream& operator<<(ostream& output, Date &obj)
{
	output << obj.description << ": " << obj.day << "-" << obj.month << "-" << obj.year << endl;
	return output;
}


// Task 2: The following function is partialy given. 
// The function is meant to print the difference between two dates.
// Complete the code of the function.
void displayDiff(Date d) 
{
	if (d.getYear() != 0)
	{
		cout << "The difference: " << d.getYear() << " year(s)" << endl;
	}
	else if (d.getMonth() != 0)
	{
		cout << "The difference: " << d.getMonth() << " month(s)" << endl;
	}
	else 
	{
		cout << "The difference: " << d.getDay() << " day(s)" << endl;
	}

}

int main()
{
	// Task 3: Create an array to hold three(3) dates and initialize 
	// the description of each date with specified values.
	int size = 3;
	Date d[size]= {{"SBT"},{"Test"},{"Final"}};



	// Task 4: Using a loop and an appropriate functions(s), enter the values
	// of day, month and year from the keyboard for the array
	for (int i=0; i<size;i++)
	{
		cin >> d[i];
	}
	
	// Task 5: Create two objects named date1 and date2 with the specified data.
	Date date1("TODAY",5,3,2018);
	Date date2("Date of birth",23,11,1999);	
	
	// Task 6: Using an appropriate function and another loop, print all the dates 
	// and the difference between date1 and other dates.

	cout << endl;
	cout << date1;
	cout << endl;

	Date temp;
	temp = date2- date1;
	cout << date2;
	displayDiff(temp);

	for(int i=0; i<size; i++)
	{
		cout << d[i];
		temp = date1 - d[i];
		displayDiff(temp);
		cout << endl;
	}

	system("pause");
	return 0;
}