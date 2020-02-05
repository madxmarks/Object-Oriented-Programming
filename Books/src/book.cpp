#include "book.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;
int book::book_num = 0;

book::book(string t, int y)
{
    book_num++;
    id = book_num;
    title = t;
  // authors.push_back(a);
    year=y;

}

book::book(const book &b)
{
    title = b.title;
    year = b.year;
    authors = b.authors;
    book_num++;
    id=book_num;
}

book&book::operator=(const book &b)
{
    title = b.title;
    year = b.year;
    authors = b.authors;

    return *this;
}


void book::setTitle(string t)
{
    title = t;
}
void book::getYear(int y)
{
    year = y;
}
void book::getNumb(int y)
{
     id = y;
}

void book::addAuthor(string t)
{
    authors.push_back(t);
}


void book::removAuthor(string t)
{
    string g = authors[0];
    for (int i=0; i<authors.size(); i++)
    {
        if (t==authors[i])
        {
            g=authors[authors.size()-1];
            authors[authors.size()-1]= authors[i];
            authors[i]=g;
            authors.pop_back();
            i--;
        }
    }
}

int book::countt()
{
   return book_num;
}


void book::print()
{
    cout << title << endl;
    cout << year << endl;
    cout << id << endl;
    for (int i=0; i<authors.size(); i++)
        cout << authors[i] << endl;
}

ostream & operator << (ostream &o, const book &b)
{
    o << b.title << endl;
    o << b.year << endl;
    o << b.id << endl;
    for (int i=0; i<b.authors.size(); i++)
        o << b.authors[i] << endl;
}

book::~book()
{
    //dtor
}
