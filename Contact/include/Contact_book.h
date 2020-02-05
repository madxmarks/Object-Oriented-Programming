#ifndef CONTACT_BOOK_H
#define CONTACT_BOOK_H
#include "EmailEntry.h"
#include "PhoneEntry.h"
#include "Entry.h"
#include <iostream>
#include <map>

class Contact_book
{
public:
    Contact_book();
    virtual ~Contact_book();
    void add (string nick, Entry* cont);
    void show();
    Contact_book(const Contact_book &f)
    {
        contacts = f.contacts;
    }
    friend ostream& operator<< (std::ostream& o, const Contact_book & c);

    Entry& operator[](string nick);
    class NameError: public logic_error
    {
    public:
        NameError(string s): logic_error(s + " Name not found") {}
    };


    void  cleear ();

protected:
    map <string, Entry*> contacts;

private:
    //    string nik;

};

#endif // CONTACT_BOOK_H
