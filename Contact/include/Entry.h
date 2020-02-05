#ifndef ENTRY_H
#define ENTRY_H
#include <string>

using namespace std;

class Entry
{
    public:
        Entry( string a );
        virtual ~Entry();
    virtual string show() const = 0;

    protected:
    int ID;
    string descrip;

    private:
};

#endif // ENTRY_H
