#include <iostream>
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

// nCr Using Recursion
// Combination Formula =>
// nCr = n!/ r!(n-r)!

// Normal Function
int nCrNormal(int n, int r)
{
    int t1, t2, t3;
    t1 = factorial(n);
    t2 = factorial(r);
    t3 = factorial(n-r);
    return t1/t2*t3;
}

// Recursive Function using Pascal Triangle
/*
Pascal Identity:
-> nCr = (n-1)C(r-1) + (n-1)Cr

Meaning:
-> Each value in Pascal's Triangle is the sum of two values directly above it:

            1     -> COLUMN 1
           1 1    -> COLUMN 2
          1 2 1   -> COLUMN 3
            ↑
          1 + 1
so -> 3C1 = 2C0 + 2C1

Here when
    nC0 = 1      (choosing nothing)
    nCn = 1      (choosing everything)
*/

int nCrRecursive(int n, int r)
{
    if(r==0 || n==r)
       return 1;
    else
       return nCrRecursive(n-1, r-1) +  nCrRecursive(n-1, r);
}


// Tower of Hanoi
// Refer the local notes or Abdul Bari's Video for reference
void TOH(int N, int A ,int B, int C)
{
    if (N>0)
    {
        TOH(N-1, A, C, B); // Move N-1 Disks from A -> B using C
        std::cout << "(" << A << ", " << C << ")" << std::endl; // Move Disk A -> C
        TOH(N-1, B, A, C); // Move N-1 Disks from B -> C using A
    }
}

int main()
{
    // int n = 5;
    // std::cout << "Sum of first " << n << " natural numbers is: " << sumofnatrualnumbers(n) << std::endl;

    // std::cout << "Factorial of " << n << " is: " << factorial(n) << std::endl;

    // std::cout << "Power using Recursion: "<< powerUsingRecursion(2, 5) << std::endl;

    // int n = 10;
    // std::cout << "Brute Force: " << FibonacciBruteForce(n) << std::endl;
    // std::cout << "Memoization: " << FibonocciMemoization(n) << std::endl;
    
    // int N=5;
    // std::cout << "Normal Function: " << nCrNormal(N, 4) << std::endl;
    // std::cout << "Recursive Function:" << nCrRecursive(N, 4);
    
    TOH(3, 1, 2, 3);
    return 0;
}