#include <iostream>

// Take Input of 10 Numbers and Print
int main()
{
    int Num;
    std::cout << "Enter your Number: ";
    std::cin >> Num;
    std::cout << '\n'; 

    for(int i=1;i<=Num;i++)
    { 
      std::cout << i << std::endl;
    }
    return 0;
}