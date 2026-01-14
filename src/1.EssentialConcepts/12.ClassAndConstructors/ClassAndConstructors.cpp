#include "ClassAndConstructors.h"

// Default Constructor
Rectangle::Rectangle() : length(1.0), width(1.0) {}

// Constructor with parameters(Overloading)
Rectangle::Rectangle(double Len, double Wid) : length(Len), width(Wid) {}

// Set/Get member functions
double Rectangle::getLength() const
{
    return length;
}

void Rectangle::setLength(double Len)
{
    length = Len;
}

double Rectangle::getWidth() const
{
    return width;
}

void Rectangle::setWidth(double wid)
{
    width = wid;
}

// Calculate Area
double Rectangle::CalculateArea() const
{
    return length * width;
}

// Calculate Perimeter
double Rectangle::CalculatePerimter() const
{
    return 2 * (length + width);
}

// Destructor
Rectangle::~Rectangle() {}