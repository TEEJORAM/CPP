#include "iostream"

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
    if(N > 0)
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
    if(N > 0)
    {
        std::cout << "N: " << N << std::endl;
        TreeRecursion(N - 1);
        TreeRecursion(N - 1);
    }
}

int main()
{
    TreeRecursion(3);
    return 0;
}