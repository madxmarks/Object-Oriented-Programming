#ifndef STORE_H
#define STORE_H
#include <vector>
#include <iostream>
#include <BrickBox.h>
#include <A_Box.h>
#include <stdexcept>

using namespace std;

class Store
{
    public:
        Store(string d, double c);
        virtual ~Store();
        void add (A_Box* box);


        class NameError: public logic_error
        {
        public:
            NameError(string s): logic_error(s){}
        };



friend ostream& operator<<(ostream &out, const Store &box)
{
        for ( vector<A_Box*>::const_iterator i = box.boxes.begin(); i != box.boxes.end();i++)
    {
        (*i)->show(out);
        out << endl;
    }
    return out;
}

void clearing(){
for (auto i = boxes.begin() ;i != boxes.end();i++)
    {
        delete *i;
    }
    boxes.clear();
}

void removee(string a);


    protected:
    vector<A_Box* > boxes;

    private:
    string description;
    double capacity;


};

#endif // STORE_H
