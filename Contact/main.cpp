#include <iostream>
#include <string>
#include "Entry.h"
#include "Contact_book.h"



using namespace std;

int main()
{
    PhoneEntry a("kek", 123);
    EmailEntry b("kek", "@mai");
    a.show();
    b.show();
    Contact_book z;
    z.add("andy", new PhoneEntry ("John Smith", 100200));
    cout << z;

       try {
 cout << z["andy"].show() << endl;
 //result:
 //Andrew Fox: Warsaw, Green St. 7 (pos. 3)
 cout << z["Name"].show() << endl;
 //NameError exception
} catch(Contact_book::NameError &e) {
 cout << e.what(); //Entry named “Name” not found.
}

cout << "\n" <<z;
z.cleear();
cout << z;
    return 0;
}
