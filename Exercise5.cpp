// Exercise 5: Aggregation, Composition & Inheritance

// Programming Technique II
// Semester 2, 2021/2022

// Date: 1 June 2022
// Section: _________
// Member 1's Name: _____________    Location: ____________ (i.e. where are you currently located)
// Member 2's Name: _____________    Location: ____________

// Log the time(s) your pair programming sessions
//  Date         Time (From)   To             Duration (in minutes)
//  _________    ___________   ___________    ________
//  _________    ___________   ___________    ________
//  _________    ___________   ___________    ________

#include<iostream>
using namespace std;

class Project{
	private:
		string title;
	public:
		Project(string _title=""){ setTitle(_title); }

		void setTitle(string _title) {title = _title;}
		string getTitle()const {return title;}
}; // End of class Project


class Contact{
	private:
		string phone;
		string email;
	public:
		Contact(string _phone="", string _email=""){
			setPhone(_phone); setEmail(_email);
		}

		void setPhone(string _phone) {phone = _phone;}
		void setEmail(string _email) {email = _email;}
		
		string getPhone() const {return phone;}
		string getEmail()const {return email;}
}; // End of class Contact


class Person{
	protected:
		string name;
		
		// Task 1: Add the attribute to implement the relationship between this class and 
		//         the class Contact
		
		
		
		
		
	public:
		
		// Task 2: Complete the constructor
		Person(string _name="", string _phone="", string _email=""){ 
			
			
		}

		void setName(string _name) {name = _name;}
		string getName() const {return name;}		
		
		// Task 3: Complete the code for the methods setEmail and setPhone
		void setEmail(string _email) { 
		
		}
		void setPhone(string _phone) {
		
		}

		// Task 4: Complete the code for the methods getEmail and getPhone, respectively.
		string getPhone() const {
		
		}
		
		string getEmail() const {
		
		}
		
}; // End of class Person



class Staff{
	protected:
		string position;  // e.g., Lecturer, Technician, Research Officer
	public:
		
		// Task 5: Complete the constructor
		Staff(string _name="", string _phone="", string _email="", string _position="") {
			
		}

		void setPosition(string _position) {position = _position;}
		string getPosition() const {return position;}
		
};  // End of class Staff


class Student{
	protected:
		string program;  // e.g., Computer Science, Electrical Engineering, etc.

		// Task 6: Add the attributes to implement the relationship between this class and 
		//         the classes Project and Staff

		
	public:
		
		// Task 7: Complete the constructor
		Student(string _name="", string _phone="", string _email="", 
		        string _program="", string _projectTitle="") {
			
			
		}

		void setProgram(string _program) {program = _program;}
		string getProgram() const {return program;}
		
		// Task 8: Complete the code for the method setAdvisor
		void setAdvisor(Staff *_advisor) {
		
		}
		
		// Task 9: Complete the code for the method getProjectTitle 
		
		string getProjectTitle() const {
		
		}
		
		// Task 10: Complete the code for the methods getAdvisorName and getAdvisorPosition, respectively
		string getAdvisorName() const {


		}

		string getAdvisorPosition() const {


		}
		
}; // End of class Student




int main()
{
	Staff advisor1("Prof. Dr. Muhammad Roslan Abdullah", "019-9875678", "mroslana29@gmail.com","Lecturer");
	Staff advisor2("Mr. Qamarool Zaman", "011-56781234", "qam23@gmail.com","Senior Technician");
	Staff advisor3("Dr. Siti Zubaidah Rosli", "010-1117456", "ctzr983@gmail.com","Research Officer");
	
	// Task 11: Create an array of students with the following information
    //
	//   "Lim Sew Ying", "010-897634045", "lsying1212@live.utm.my","Electrical Engineering", "Smart Dustbin"
	//   "Abu Bakar Razali", "011-1210000", "abraz78@live.utm.my","Computer Science", "Money Recognition for Blind People"
	//   "Nur Amalina Muhammad", "012-9000123", "nama978@live.utm.my","Biomedical Engineering", "Dengue Testing Kit"
	

	// Task 12: Print the information of all the students along with their project's title

	cout << endl << "-------------- First Printing -----------------------" << endl << endl;
	for (int i=0; i<3; i++){
		cout << "Student # " << (i+1) << endl;
		cout << "Name                : " << endl;
		cout << "Phone               : " << endl;
		cout << "Email               : " << endl;
		cout << "Project Title       : " << endl;
		cout << "Advisor's Name      : " << endl;		
		cout << "Advisor's Position  : " << endl;
		cout << endl;
	}

	
	// Task 13: You should notice that in Task 12 there is no information about the advisors because they have not been set yet for each of the students
	//          Thus, assign each student with an advisor. You may arrange the assignment on your own.
	
	
	
	
	// Task 14: Print again the information of all the students along with their project's title and advisor

	cout << endl << "-------------- Second Printing -----------------------" << endl << endl;


	// Task 15: Suddenly, the first and second students want to change their advisor each other, while  
	//          the advisor for the third student wants to withdraw from being appointed as an advisor.
	//          Write the code to implement these situations.
	




	// Task 16: Print again the information of all the students

	cout << endl << "-------------- Third Printing -----------------------" << endl << endl;
	                      
	system("pause");
	return 0;
}
