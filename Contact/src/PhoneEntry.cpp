#include "PhoneEntry.h"
#include <iostream>
#include <sstream>

PhoneEntry::PhoneEntry(string d, int num) : Entry(d)
{
    phone = num;
}

PhoneEntry::~PhoneEntry()
{
    //dtor
}

string PhoneEntry::show() const
{
// std::cout  <<descrip << " " << phone << endl;
std::stringstream ss;
ss << ID << ": " << descrip << ", num: " << phone;
std::string cont = ss.str();
return cont;

}
