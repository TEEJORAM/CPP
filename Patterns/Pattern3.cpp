// PATTERN 3
/*
1  
1 2 
1 2 3 
1 2 3 4
*/

#include <iostream>
int main()
{
    int N;
    std::cout << "Enter the Number:";
    std::cin >> N;

    // PATTERN GENERATION
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=i;j++)
        {
            std::cout << j;
        }
        std::cout << "\n";
    }
}
