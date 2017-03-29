#define _USE_MATH_DEFINES 
#include <iostream>
#include "Circle.h"

using std::cout;
using std::cin;
using std::endl;


Circle::Circle()
{
    Radius = 1;
    Ference = 2 * M_PI;
    Area = M_PI;
}

Circle::Circle(double a) {
    Radius = a;
    Ference = 2 * M_PI*Radius;
    Area = Ference*Radius / 2;
}
void Circle::SetRadius(double a) {
    Radius = a;
    Ference = 2 * M_PI*Radius;
    Area = Ference*Radius / 2;
}
void Circle::SetFerence(double a) {
    Ference = a;
    Radius = Ference / (2 * M_PI);
    Area = Ference*Radius / 2;
}
void Circle::SetArea(double a) {
    Area = a;
    Radius = sqrt(Area / M_PI);
    Ference = 2 * M_PI *Radius;
}
double Circle::GetRadius() const {
    return Radius;
}
double Circle::GetFerence() const {
    return Ference;
}
double Circle::GetArea() const {
    return Area;
}


Circle::~Circle()
{
}
