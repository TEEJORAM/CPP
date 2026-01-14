// Header guard to prevent multiple inclusions of this header file
#pragma once

class Rectangle
{
    private:
        double length;
        double width;
    public:
        // Default Constructor
        Rectangle();

        // Constructor with parameters(Overloading)
        Rectangle(double Len, double Wid);

        // Set/Get member functions
        double getLength() const;
        void setLength(double Len);
        double getWidth() const;
        void setWidth(double wid);

        // Calculate Area
        double CalculateArea() const;

        // Calculate Perimter
        double CalculatePerimter() const;

        // Destructor;
        ~Rectangle();
};