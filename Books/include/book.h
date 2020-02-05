#ifndef BOOK_H
#define BOOK_H
#include <vector>
#include <string>

using namespace std;

class book
{
    public:
        book();
        virtual ~book();
    book(string t, int y);
void print();
book (const book &b);
void setTitle(string t);
void getYear(int y);
void getNumb(int y);
book &operator=(const book &b);
void addAuthor(string t);
friend ostream & operator <<(ostream &o, const book &b);
void removAuthor(string t);
static int countt();

    protected:

    private:
        int id;
        string title;
        vector <string> authors;
        int year;
        static  int book_num;


};

#endif // BOOK_H
