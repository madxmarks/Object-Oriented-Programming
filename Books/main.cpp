#include <iostream>
#include "book.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    book a("horror", 1993);
    a.addAuthor("MARKS");
    a.addAuthor("Kwarks");
    a.addAuthor("Marshak");
    a.addAuthor("Grechka");
    a.addAuthor("Kwarks");
    a.print();
    a.removAuthor("Kwarks");
    cout<< endl<< endl;
    book b(a);
    b.print();
    cout<< endl<< endl;
    book c=a;
    c=b;
    cout << c;
    cout<< endl<< endl;
    cout << book::countt();


    return 0;
}
