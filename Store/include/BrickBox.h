#ifndef BRICKBOX_H
#define BRICKBOX_H
#include "A_Box.h"

class BrickBox : public A_Box
{
    public:
        BrickBox(string a, int b, double l, double w, double h);
        virtual ~BrickBox();
        double getVolume() const;
        void show(ostream &out) const;

    protected:
    double length;
    double width;
    double height;

    private:
};

#endif // BRICKBOX_H
