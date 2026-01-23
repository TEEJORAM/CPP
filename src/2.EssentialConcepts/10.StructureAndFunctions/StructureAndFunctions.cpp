#include "iostream"

struct Rectangle
{
    double length;
    double width;
};

void initializeRectangle(Rectangle *P, double len, double wid)
{
    P->length = len;
    P->width = wid;
}

double calculateArea(Rectangle R)
{
    return R.length * R.width;
}

void changeLength(Rectangle &R, double newLength)
{
    R.length = newLength;
}

void changeWidth(Rectangle &R, double newWidth)
{
    R.width = newWidth;
}

int main()
{
    Rectangle R;

    initializeRectangle(&R, 50, 60);
    std::cout << "Rectangle has been initialized.\n";
    std::cout << "Length: " << R.length << ", Width: " << R.width << "\n";

    std::cout << "Area of Rectangle: " << calculateArea(R) << "\n";

    std::cout << "Changing Length to 100.\n";
    changeLength(R, 100);

    std::cout << "Changing Width to 120.\n";
    changeWidth(R, 120);

    std::cout << "Updated Length: " << R.length << ", Updated Width: " << R.width << "\n";
    return 0;
}