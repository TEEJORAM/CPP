// PATTERN 2
/*
*  
* * 
* * * 
* * * *
*/

#include <iostream>
int main()
{
    int N;
    std::cout << "Enter the Number:";
    std::cin >> N;

    // PATTERN GENERATION
    for (int i=0;i<N;i++)
    {
        for (int j=0;j<=i;j++)
        {
            std::cout << "* ";
        }
        std::cout << "\n";
    }
}
