#include <iostream>
#include <string>

int main() 
{
    // Integer
    int Num;
    std::cout << "Enter an integer: ";
    std::cin >> Num;
    std::cout << "You entered: " << Num << std::endl;

    // Float Input & Output
    float fNum;
    std::cout << "Enter a floating-point number: ";
    std::cin >> fNum;
    std::cout << "You entered: " << fNum << std::endl;

    // Character Input & Output
    char ch;
    std::cout << "Enter a single character: ";
    std::cin >> ch;
    std::cout << "You entered: " << ch << std::endl;

    // String Input & Output
    std::string SName;
    std::cout << " Enter your name: ";
    std::cin.ignore(); // Prevents issues when switching from std::cin to std::getline()

    // Reason - std::getline() used for full-line string input(Useful when spaces are included)
    std::getline(std::cin, SName);
    std::cout << "Hello, " << SName << "!" << std::endl;
    return 0;
}
