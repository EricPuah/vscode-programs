//? Exercise 3: C++ Strings
//? file: custom_string.cpp

//!----------------------------------------------------------------------------------------
//! This is the only file that you will need to modify in this exercise.
//! Also, you will submit only this file.
//! In this file will implement the class 'CustomString'.
//!----------------------------------------------------------------------------------------

// Programming Technique II
// Semester 2, 2021/2022

// Date: 28 April 2022
// Section: __04______
// Member 1's Name: PUAH JUN HONG    Location: Kulai,Johor (i.e. where are you currently located)
// Member 2's Name: AL-NADHARI MUSTAFA SAEED ABDULQADER    Location: Johor
// Member 3's Name: SAFURA BALQIS BINTI AZMAN  Location: Masjid Tanah, Melaka

#include <iostream>
#include <string>
using namespace std;

#include "custom_string.hpp"

//?----------------------------------------------------------------------------------------
//? The following methods are fully given: a constructor, getData() and setData()
//?----------------------------------------------------------------------------------------

CustomString::CustomString(const string &_data) : data(_data) {}
string CustomString::getData() const { 
    return data;
 }
void CustomString::setData(const string &_data) {
     data = _data; 
       
}

//! Task 1: Complete the implementation of the following mutator methods:
//!        (a) pushFront()
//!        (b) pushBack()
//!        (c) pop()
//!        (d) popFront()
//!        (e) popBack()

void CustomString::pushFront(const string &s)
{ 
    data.insert(0,s);
    
}

void CustomString::pushBack(const string &s)
{   
    data.append(s);
}

string CustomString::pop(int index, int count)
{
    string sub=data.substr(index,count);
    data.erase(index,count);
    return sub;
}

string CustomString::popFront(int count)
{
    string sub2=data.substr(0,count);
    data.erase (0,count);
    return sub2;
}

string CustomString::popBack(int count)
{   
    string sub3=data.substr(data.length()-count,count);
    data.erase (data.length()-count,count);
    return sub3;
}

//! Task 2: Complete the implementation of the following overloaded operators:
//!        (a) operator !
//!        (b) operator *

CustomString CustomString::operator!() const
{   
    string newString;
    newString=data;
    for(int i=0; i<data.length();i++)
    newString[i]=data[data.length()-1-i];

    return CustomString(newString);
}   

CustomString CustomString::operator*(int count) const
{
    string newString= data;
    while (count>1) {
        newString +=data;
        count--;
    }  
    return CustomString(newString);
}
    

//! Task 3: Complete the implementation of the following conversion methods:
//!        (a) toDouble()
//!        (b) toUpper()

double CustomString::toDouble() const
{   
    double num1;
    num1 =stod(data);
    return num1;
}

CustomString CustomString::toUpper() const
{   //try run again
    string newData=data; 
       for(int i=0; i<data.length();i++)
       {
          newData[i]= toupper(newData[i]);
       }
        
       return CustomString(newData);
} 