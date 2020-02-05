#include "BrickBox.h"

BrickBox::BrickBox(string a, int b, double l, double w, double h) : A_Box(a,b)
{
    length = l;
    width = w;
    height = h;
}

BrickBox::~BrickBox()
{
    //dtor
}

double BrickBox::getVolume() const
{
   return length*width*height;
}

void BrickBox::show(ostream &out) const
{
    A_Box::show(out);
    out << " , " << length << " , " <<width << " , " << height ;
}
