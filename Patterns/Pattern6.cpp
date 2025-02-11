// PATTERN 6
/*
1 2 3 4 5
1 2 3 4 
1 2 3
1 2
1
*/

#include <iostream>
int main()
{
    int N;
    std::cout << "Enter the Number:";
    std::cin >> N;

    // PATTERN GENERATION
    for (int i=N;i>=1;i--)
    {
        for (int j=1;j<=i;j++)
        {
            std::cout << j << " ";
        }
        std::cout << "\n";
    }
}
