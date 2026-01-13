#include "iostream"

// References:
// Alias for another variable
// & operator is used to declare reference variable
// After declare, reference variable should be initiailized with existing variable else compilte error as NOT INITIALIZED

// Notes:
// Used in parameter passing to avoid copying large data
// Referemce doesn't use extra memory instead uses same memory as original variable

int main()
{
    int x = 50;
    int &r = x;

    std::cout << "Value of x: " << x << std::endl;
    std::cout << "Value of r (reference to x): " << r << std::endl;

    int y = 100;
    r = y; // This will assign value of y to x, NOT make r refer to y
    std::cout << "After assigning y to r:" << std::endl;
    std::cout << "Value of x: " << x << std::endl; 
    std::cout << "Value of r (reference to y: " << r << std::endl;

    return 0;
}