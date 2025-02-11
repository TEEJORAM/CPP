// PATTERN 6
/*
N = 4

OUTPUT
    *
   ***
  *****
 *******
*/

// PENDING

#include <iostream>
int main()
{
    int N;
    std::cout << "Enter the Number:";
    std::cin >> N;

    // PATTERN GENERATION
    for(int i=1;i<=N;i++)
    {
        for (int j=1;j<=((2*N)-1);j++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
}
