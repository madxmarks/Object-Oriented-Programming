#include <iostream>
#include <Store.h>
#include "A_Box.h"
#include <BrickBox.h>

using namespace std;

int A_Box::amount = 0;

int main()
{

Store sto("Home store", 100);
cout << A_Box::counti();
try {
sto.add(new BrickBox("s", 4253223, 2, 2, 1));
sto.add(new BrickBox("succa", 02342, 4, 3, 1));
sto.add(new BrickBox("susaba", 02342, 4, 312, 31));
}
catch (Store::NameError &e)
{
    cout <<e.what();
}
cout << A_Box::counti() << endl;

cout << sto << endl;

 sto.removee("succa");

cout << sto << endl;


sto.clearing();
cout << sto;
cout << A_Box::counti() << endl;

    return 0;
}
