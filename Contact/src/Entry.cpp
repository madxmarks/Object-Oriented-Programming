#include "Entry.h"
#include <string>
#include <iostream>

static int num = 0;

using namespace std;

Entry::Entry(string a)
{
    descrip = a;
    num++;
    ID = num;
}

Entry::~Entry()
{
    //dtor
}


