// Exercise 4: Association, Aggregation & Composition

// Programming Technique II
// Semester 2, 2021/2022

// Date: 18 May 2022
// Section: 04
// Member 1's Name: Puah Jun Hong    Location: UTM (i.e. where are you currently located)
// Member 2's Name: _____________    Location: ____________

// Log the time(s) your pair programming sessions
//  Date         Time (From)   To             Duration (in minutes)
//  _________    ___________   ___________    ________
//  _________    ___________   ___________    ________
//  _________    ___________   ___________    ________

#include <iostream>
#include <cmath>
using namespace std;

class Term
{
private:
    int coef;
    int exp;

public:
    Term(int c = 0, int e = 0);
    void set(int c, int e);
    int evaluate(int x) const;
    int exponent() const;
    int coefficient() const;
};

class Polynomial
{
private:
    int term;
    Term t[10];
public:
    Polynomial();
    void input();
    int evaluate(int x) const;
    Term largestTerm() const;
    int degree() const;
};

//----------------------------------------------------------------------------
int main()
{
    Polynomial Poly1;
    
    Poly1.input();
    cout << endl;

    cout << "Polynomial's degree = " << Poly1.degree()<< endl
         << endl;

    cout << " x  \t\tPolynomial value" << endl;
    cout << "----\t\t----------------" << endl;

    for (int x = 0; x <= 5; x++)
        cout << x << "  \t\t" << Poly1.evaluate(x)<< endl;

    cout << endl;

    system("pause");
    return 0;
}

//----------------------------------------------------------------------------
// class Term

// The constructor is given

Term::Term(int c, int e) : coef(c), exp(e) {}

// Implement the other methods
void Term::set(int c, int e) {
    coef = c;
    exp = e;
}
int Term::exponent() const {
    return exp;
}
int Term::coefficient() const {
    return coef;
}
int Term::evaluate(int x) const {
    return coef* (pow(x,exp));
}
//----------------------------------------------------------------------------

// class Polynomial

// Implement the constructor and the other methods of the class Polynomial
Polynomial::Polynomial(){};

void Polynomial::input(){
    cout<< "Enter a polynomial: "<<endl;
    cout<< "How many term? => ";
    cin >> term;

    int temp1, temp2;
    for (int i=0; i<term; i++)
    {
        cout<<"Enter term #"<< i+1 <<" (coef and exp) =>";
        cin>> temp1 >> temp2;
        t[i].set(temp1, temp2);
    };
};

int Polynomial::evaluate(int x) const{
    int totalValue = 0;
    for(int i=0; i<term; i++)
    {
        totalValue += t[i].evaluate(x);
    }
    return totalValue;
    }
Term Polynomial::largestTerm() const{
    int index = 0;
    int largestTerm = 0;
    for(int i=0; i<term; i++)
    {
        if (t[i].exponent()> largestTerm)
        {
            largestTerm = t[i].exponent(); 
            index= i;
        }
    }
    return t[index];
}
int Polynomial::degree() const{
    Term largestexp;
    largestexp= largestTerm();
    return largestexp.exponent();
}



