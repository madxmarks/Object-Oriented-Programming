#ifndef PHONEENTRY_H
#define PHONEENTRY_H
#include "Entry.h"

class PhoneEntry : public Entry
{
    public:
        PhoneEntry(string d, int num);
        virtual ~PhoneEntry();
        virtual string show() const;

    protected:
        int phone;

    private:
};

#endif // PHONEENTRY_H
