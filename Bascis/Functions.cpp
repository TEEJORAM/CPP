// Write the program that accepts 4 numbers
// And print the summation

#include <iostream>

void summation(int *P, int N)
{
    int sum;
    for(int i=0;i<N;i++)
    {
        sum = sum + P[i];
    }
    int Fsum = sum / N;
    std::cout << " Summation of " << N << " numbers:" << Fsum;
}

int main()
{
    int N;
    std::cout << "Enter the Size/No. of numbers:";
    std::cin >> N;

    int *P = new int[N];

    std::cout << "\n";
    std::cout << "Enter the numbers:";
    for(int i=0;i<N;i++)
    {
        std::cin >> P[i];
    }

    // Summation Func
    summation(P,N);
    
    // Deallocation
    delete [] P;

    return 0;
}