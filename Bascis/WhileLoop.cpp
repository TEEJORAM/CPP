#include <iostream>

// Take Input of 10 Numbers and Print
int main()
{
    int Num;
    std::cout << "Enter your Number: ";
    std::cin >> Num;
    std::cout << '\n'; 

    // While Loop
    int i=1;
    while(i<=Num)
    {
        std::cout << i << std::endl;
        i++;
    }
    return 0;
}