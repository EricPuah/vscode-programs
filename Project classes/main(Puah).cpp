#include "user.hpp"
#include "student.hpp"
#include "coach.hpp"
#include "Result.h"
#include<iostream>
#include<typeinfo>
using namespace std;


int main()
{
    student s1;
    s1.inputStudent();
    s1.display();

    system ("pause");
    return 0;
}
