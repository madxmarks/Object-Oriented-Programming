#ifndef A_BOX_H
#define A_BOX_H
#include <iostream>

using namespace std;

class A_Box
{
    static int amount;

    public:
        A_Box();
        A_Box(string a, int b);
        virtual ~A_Box();
         virtual void show(ostream&) const;
        virtual double getVolume() const =0;
       static int counti();
       string getLabel() const
       {
           return label;
       }

    protected:
    string label;
    int colour;

    private:
};

#endif // A_BOX_H
