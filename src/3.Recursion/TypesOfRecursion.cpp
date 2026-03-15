#include <iostream>

// Tail Recursion
// 1. In tail recursion, the recursive call is the last operation in the function
// Means at returning time, there is no additional operation to perform
// 2. Tail recursion can be easily converted into an loop
/*
while (N > 0)
{
    std::cout << "N: " << N << std::endl;
    N--;
}
*/
// 3. Time complexity of both tail recursion and loop is O(N)
// 4. Space complexity of tail recursion is O(N) because each recursive call adds a new activation layer to the call stack 
// where loop uses only one single activation record created during first iteration so space complexity is O(1)
void TailRecursion(int N)
{
    if (N > 0)
    {
        std::cout << "N: " << N << std::endl;
        TailRecursion(N - 1);
    }
}

// Head Recursion
// 1. In head recursion, the recursive call is the first operation in the function
// Means at returning time, there can be some addition operation to perform
// 2. Head recursion is not easily converted into an loop
void HeadRecursion(int N)
{
    if (N > 0)
    {
        HeadRecursion(N - 1);
        std::cout << "N: " << N << std::endl;
    }
}

// Linear Recursion
// A recursive function that is called only one time in each activation record is called LINEAR RECURSION
/*
fun(n)
{
    if (n > 0)
    {
        fun(n - 1);
    }
}
*/

// Tree Recursion
// A recursive function that calls itself more than one time in each activation record is called TREE RECURSION
/*
fun(n)
{
    if (n > 0)
    {
        fun(n - 1);
        fun(n - 1);
    }
}
*/
// - Time complexity of tree recursion is O(2^N) because each call generates two more calls(Draw a recursion tree to visualize)
// - Space complexity is O(N) because the maximum depth of the recursion tree is N

void TreeRecursion(int N)
{
    if (N > 0)
    {
        std::cout << "N: " << N << std::endl;
        TreeRecursion(N - 1);
        TreeRecursion(N - 1);
    }
}

// Indirect Recursion
// When a function calls another function and that function in turn calls the first function in an circular form, it's called INDIRECT RECURSION
/*
void A(int N)
{
    if(N>0
    {
        std::cout << "N: " << N << std::endl;
        B(N - 1);
    }
}

void B(int N)
{
    if(N > 1)
    {
        std::cout << "N: " << N << std::endl;
        A(N / 2);
    }
}
*/

// Forward Declaration of A because it is used in B before its definition
void indirectRecursionA(int N);

void indirectRecursionB(int N)
{
    if (N > 1)
    {
        std::cout << "N: " << N << std::endl;
        indirectRecursionA(N / 2);
    }
}

void indirectRecursionA(int N)
{
    if (N > 0)
    {
        std::cout << "N: " << N << std::endl;
        indirectRecursionB(N - 1);
    }
}

// Nested Recursion
// A recursive function that passes a recursive call as an argument to itself
int NestedRecursion(int N)
{
    if (N > 100)
        return N - 10;
    else
        return NestedRecursion(NestedRecursion(N + 11));
}

int main()
{
    std::cout << "Tail Recursion:" << std::endl;
    TailRecursion(3);

    std::cout << "\nHead Recursion:" << std::endl;
    HeadRecursion(3);

    std::cout << "\nTree Recursion:" << std::endl;
    TreeRecursion(3);

    std::cout << "\nIndirect Recursion:" << std::endl;
    indirectRecursionA(5);

    std::cout << "\nNested Recursion Result: " << NestedRecursion(96) << std::endl;

    return 0;
}