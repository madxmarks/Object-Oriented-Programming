#include "EmailEntry.h"
#include <iostream>
#include <sstream>

EmailEntry::EmailEntry(string d, string m) : Entry (d)
{
    mail = m;
}

string EmailEntry::show() const
{
 //   std::cout << descrip << " " << mail<< endl ;

std::stringstream ss;
ss << ID << ": " << descrip << ", mail: " << mail;
std::string cont = ss.str();
return cont;
}

EmailEntry::~EmailEntry()
{
    //dtor
}
