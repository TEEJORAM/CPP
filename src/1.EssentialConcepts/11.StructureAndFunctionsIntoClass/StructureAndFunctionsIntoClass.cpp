#include "iostream"

class Rectangle
{
private:
    double length;
    double width;

public:
    // Manual way of intiailizing member variables
    // void Initialize(double L, double W) { length = L; width = W; }

    // Using constructor to initialize member variables
    Rectangle(double L = 0, double W = 0) : length(L), width(W) {}
    // Advtange: Gets called when object is created either with values passed or default value as ZERO(SET BY DEVELOPER)

    double CalculateArea() { return length * width; }
    void SetWidth(double newWidth) {width = newWidth; }
    void SetLength(double newLength) {length = newLength; }
    double GetWidth() { return width; }
    double GetLength() { return length; }
};

int main()
{
    // Manual way of intializing member variables
    // Rectangle R;
    // R.Initialize(50, 60);

    // Constructor
    Rectangle R(50, 60);
    std::cout << "Rectangle has been initialized.\n";
    std::cout << "Length: " << R.GetLength() << ", Width: " << R.GetWidth() << "\n";

    std::cout << "Area of Rectangle: " << R.CalculateArea() << "\n";

    std::cout << "Changing Length to 100.\n";
    R.SetLength(100);
    std::cout << "Changing Width to 120.\n";
    R.SetWidth(120);

    std::cout << "Updated Length: " << R.GetLength() << ", Updated Width: " << R.GetWidth() << "\n";
    std::cout << "Updated Area of Rectangle: " << R.CalculateArea() << "\n";

    return 0;
}