// PATTERN 4
/*
1  
2 2 
3 3 3 
4 4 4 4
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
            std::cout << i << " ";
        }
        std::cout << "\n";
    }

}
