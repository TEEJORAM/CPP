// PATTERN 6
/*
* * * * * 
* * * *
* * *
* * 
*
*/

#include <iostream>
int main()
{
    int N;
    std::cout << "Enter the Number:";
    std::cin >> N;

    // PATTERN GENERATION
    for(int i=N;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            std::cout << "* ";
        }
        std::cout << "\n";
    }
}
