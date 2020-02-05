#include "Store.h"
#include <vector>
#include <sstream>

using namespace std;

Store::Store(string d, double c)
{
    description = d;
    capacity = c;
}

Store::~Store()
{
    clearing();
}

void Store::add(A_Box* box){
double sum = 0;

boxes.push_back(box);
    for (auto i = boxes.begin() ;i != boxes.end();i++)
    {
        sum = sum + (*i)->getVolume();
        if (sum > capacity)
        {
            boxes.pop_back();
            std::ostringstream strs;
            strs << capacity - (sum - box->getVolume());
            std::string str = strs.str();
            delete *i;

            throw NameError ("\n Not enough space " + str + " left \n ");
        }
    }
}



void Store::removee(string a)
{


    for (auto i = boxes.begin() ;i != boxes.end(); i++)
    {

    if(a==(*i)->getLabel())
    {
        delete (*i);
        boxes.erase(i--);
    }
    }


}







