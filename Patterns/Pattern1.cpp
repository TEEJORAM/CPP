// PATTERN 1
/*
* * * * 
* * * * 
* * * * 
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
        for (int j=0;j<N;j++)
        {
            std::cout << "* ";
        }
        std::cout << "\n";
    }

}
