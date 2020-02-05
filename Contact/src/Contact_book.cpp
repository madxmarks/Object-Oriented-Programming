#include "Contact_book.h"
#include "Entry.h"
#include "EmailEntry.h"
#include "PhoneEntry.h"
#include <map>

Contact_book::Contact_book()
{
    //ctor
}

void Contact_book::add (string nick, Entry* cont){
     contacts.insert ( pair<string,Entry*>(nick,cont) );
//contacts[nick] = contact;
}


Entry& Contact_book::operator[](string nick){

   auto it = contacts.find(nick);
   if (it == contacts.end() ) throw NameError(" NameError");
       return *(it -> second);

}

void Contact_book::cleear ()
{
      for (map<string, Entry*>::const_iterator it = contacts.begin(); it != contacts.end(); ++it)
contacts.erase(it);
}

std::ostream& operator<<(std::ostream& out, const Contact_book& c)
{
    for (map<string, Entry*>::const_iterator it = c.contacts.begin(); it != c.contacts.end(); ++it)
    out << (*it).first << " : " <<  ((*it).second)->show() << endl;
}

Contact_book::~Contact_book()
{
   cleear ();
}
