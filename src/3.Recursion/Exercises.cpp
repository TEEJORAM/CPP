#include "iostream"
#include <chrono>

// Sum of N natural numbers using recursion
// Note: we can easily find sum using formula n(n+1)/2 
int sumofnatrualnumbers(int N)
{
    if(N==0)
        return 0;
    else
        return N + sumofnatrualnumbers(N-1);
}

// Factorial of a number using recursion
int factorial(int N)
{
    if(N==0)
       return 1;
    else
       return N * factorial(N-1);
}


// Power using Recursion
int powerUsingRecursion(int base, int exp)
{
    if(exp==0)
        return 1;
    else
        return base * powerUsingRecursion(base, exp-1);
}

// Fibonacci Series using Recursion
// By default, fibonacci series start with 0 and 1
// Then remaining units of number are obtained by adding previous two numbers

int FibonacciBruteForce(int N)
{
    if(N <= 1)
        return 1;
    else
        return FibonacciBruteForce(N - 2) + FibonacciBruteForce(N - 1);
}

// Storing the results of function calls so that they can be utilised later to avoid
// redundant calculations is called MEMOIZATION
int Fib[11] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };
int FibonocciMemoization(int N)
{
    if (N <= 1)
    {
        Fib[N] = N;
        return N;
    }
    else
    {
        if (Fib[N-2] == -1)
            Fib[N-2] = FibonocciMemoization(N-2);
        if (Fib[N-1] == -1)
            Fib[N-1] = FibonocciMemoization(N-1);
        return Fib[N-2] + Fib[N-1];
    }
}

int main()
{
    // int n = 5;
    // std::cout << "Sum of first " << n << " natural numbers is: " << sumofnatrualnumbers(n) << std::endl;

    // std::cout << "Factorial of " << n << " is: " << factorial(n) << std::endl;

    // std::cout << "Power using Recursion: "<< powerUsingRecursion(2, 5) << std::endl;

    int n = 10;
    std::cout << "Brute Force: " << FibonacciBruteForce(n) << std::endl;
    std::cout << "Memoization: " << FibonocciMemoization(n) << std::endl;
    return 0;
}