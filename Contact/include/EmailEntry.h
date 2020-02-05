#ifndef EMAILENTRY_H
#define EMAILENTRY_H
#include "Entry.h"

class EmailEntry : public Entry
{
    public:
        EmailEntry(string d, string m);
        virtual ~EmailEntry();
        virtual string show() const;


    protected:
        string mail;

    private:
};

#endif // EMAILENTRY_H
