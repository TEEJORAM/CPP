#include <iostream>

// Pass By Value
void PassByValue(int X)
{
    X = X + 10;
    std::cout << "InsidePassByValue X:" << X << std::endl;
}

// Pass By Reference
void PassByReference(int &X)
{
    X = X + 10;
    std::cout << "InsidePassByReference X:" << X << std::endl;
}

int main()
{
    int A=5,B=5;

    // Before Pass By Value Call
    std::cout << "Before PassByValue Call - A:" << A << std::endl;
    PassByValue(A);
    std::cout << "After PassByValue Call - A:" << A << std::endl;

    // Before Pass By Reference Call
    std::cout << "Before PassByReference Call - B:" << B << std::endl;
    PassByReference(B);
    std::cout << "After PassByReference Call - B:" << B << std::endl;

    return 0;
}