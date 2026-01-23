#include "iostream"
// SWAPPING NUMBERS


// TYPES:
/*
1. Pass by Value
2. Pass by Address (Using Pointers)
3. Pass by Reference
*/

void callbyvalueSwap(int a, int b)
{
    // std::swap(a, b);
    // or
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void callbyaddressSwap(int* A, int* B)
{
    int temp;
    temp = *A;
    *A = *B;
    *B = temp;
}

void callbyreferenceSwap(int& A, int& B)
{
    int temp;
    temp = A;
    A = B;
    B = temp;
}

int main()
{
    int X = 10, Y = 20;
    // Actual parameters doesn't change in pass by value method
    std::cout << "Before Call by Value Swap: X = " << X << ", Y = " << Y << std::endl;
    callbyvalueSwap(X, Y);
    std::cout << "After Call by Value Swap: X = " << X << ", Y = " << Y << std::endl;

    // Actual parameters changes in pass by address method
    // Since we're passing address of actual parameters
    std::cout << "Before Call by Address Swap: X = " << X << ", Y = " << Y << std::endl;
    callbyaddressSwap(&X, &Y); // Passing address of X and Y
    std::cout << "After Call by Address Swap: X = " << X << ", Y = " << Y << std::endl;

    // Actual parameters changes in pass by reference method
    // Since we're passing reference(alias) of actual parameters
    // Alias uses same memory as original variable just different name
    std::cout << "Before Call by Reference Swap: X = " << X << ", Y = " << Y << std::endl;
    callbyreferenceSwap(X, Y); // Passing reference(alias) of X and Y 
    std::cout << "After Call by Reference Swap: X = " << X << ", Y = " << Y << std::endl;

    return 0;
}