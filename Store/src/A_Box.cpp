#include "A_Box.h"



A_Box::A_Box()
{
}

A_Box::A_Box(string a, int b)
{
    label = a;
    colour = b;
    amount++;
}

A_Box::~A_Box()
{
    amount --;
    //dtor
}

int A_Box::counti()
{
    return amount;
}


void A_Box::show(ostream &out) const
{
    out << label << ": " << colour;
}
