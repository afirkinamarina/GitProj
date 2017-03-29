#pragma once
class Circle
{
private:
    double Radius, Ference, Area;
public:
    Circle();
    Circle(double);
    void SetRadius(double);
    void SetFerence(double);
    void SetArea(double);
    double GetRadius() const;
    double GetFerence() const;
    double GetArea() const;
    ~Circle();
};

