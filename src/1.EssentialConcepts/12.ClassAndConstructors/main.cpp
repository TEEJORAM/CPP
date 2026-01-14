#include "iostream"
#include "ClassAndConstructors.h"

int main()
{
    // Using Default Constructor
    Rectangle R1;
    std::cout << "Default Constructor:\n";
    std::cout << "Length: " << R1.getLength() << ", Width: " << R1.getWidth() << "\n";
    std::cout << "Area: " << R1.CalculateArea() << "\n";
    std::cout << "Perimeter: " << R1.CalculatePerimter() << "\n";

    // Using Parameterized Constructor
    Rectangle R2(20, 30);
    std::cout << "\nParameterized Constructor:\n";
    std::cout << "Length: " << R2.getLength() << ", Width: " << R2.getWidth() << "\n";
    std::cout << "Area: " << R2.CalculateArea() << "\n";
    std::cout << "Perimeter: " << R2.CalculatePerimter() << "\n";

    return 0;
}