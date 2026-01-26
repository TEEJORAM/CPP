#include "iostream"

// Head Recursion Example
void recursiveFunction1(int N)
{
    // Base Condition
    if (N > 0)
    {
        std::cout << "N: " << N << std::endl;
        recursiveFunction1(N - 1);
    }
}

// Tail Recursion Example
void recursiveFunction2(int N)
{
    if (N > 0)
    {
        recursiveFunction2(N-1);
        std::cout << "N: " << N << std::endl;
    }
}
/*
- In tail recursion, each recursive call waits until the one it called returns. So for example:
    recursiveFunction2(3)
        calls recursiveFunction2(2)
            calls recursiveFunction2(1)
                calls recursiveFunction2(0)
                prints 1
            prints 2
        prints 3 
        
- Since recursion calls go down to N = 0 and returns happen in LIFO(LAST IN FIRST OUT)->STACK PRINCIPLE
- so function with N=1 resumes first, prints 1, then 2,3,4 & 5


*/

// Normal Recursion
// Each recursive call creates a new layer of memory in the stack for N with new value assigned
// While returning, each layer adds that particular N value to the sum of previous layers
int NormalRecursionFunction(int N)
{
    if(N > 0)
    {
        return NormalRecursionFunction(N - 1) + N;
    }
    return 0;
}

// Static Recursion 
// In each recursive call, static variables memory created only once during loading time and won't be created again 
// so all corresponding recursive uses the same memory location meaning same value
int StaticRecursionFunction(int N)
{
    static int X = 0;
    if(N > 0)
    {
        X++;
        return StaticRecursionFunction(N - 1) + X;
    }
    return 0;
}

// Global Recrusion
// In each recursive call, global variable memory created only once during loading time and won't be created again similar like static variable
// Difference between static and global variable is that static variable scope is limited to file/function whereas global variable scope is throughout the project
int GlobalX = 0;
int GlobalRecursionFunction(int N)
{
    if(N > 0)
    {
        GlobalX++;
        return GlobalRecursionFunction(N - 1) + GlobalX;
    }
    return 0;
}

/*int main()
{
    int X = 5;
    std::cout << "Normal Recursion Result: " << NormalRecursionFunction(X) << std::endl;
    std::cout << "Static Recursive Result: " << StaticRecursionFunction(X) << std::endl;
    std::cout << "Global Recursive Result: " << GlobalRecursionFunction(X) << std::endl;
    return 0;
}*/