#include <conio.h>
#include <iostream>
#include "Circle.h"

using std::cout;
using std::cin;
using std::endl;

int main() {
Circle circle1(6378.1);

Circle circle2;
circle2.SetFerence(circle1.GetFerence() + 1);

cout << "difference" << circle2.GetRadius() - circle1.GetRadius() << endl;

Circle circle3(3);
Circle circle4(4);
double dorozhka = (circle4.GetArea() - circle3.GetArea()) * 1000;
double zabor = circle4.GetFerence() * 2000;
double vsego = dorozhka + zabor;

cout << "Price of the walkway around the pool " << dorozhka << endl;
cout << "Fence price " << zabor << endl;
cout << "Price for all " << vsego << endl;
_getch();
return 0;
}


