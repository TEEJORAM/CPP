#include "iostream"

// Function
// Group of instructions that perform specific task

// Grouping data we name as structure
/*
structure StructureName
{
    data_type member1;
    data_type member2;
    ...
};
*/
// Grouping instructions we name as function/modules
/*
void fun1() {}
void fun2() {}
void fun3(data_type param1, data_type param2) {}
...
Known as moduler or procedural programming
*/

int add(int a, int b) // Formal Parameters
{
    return a + b;
}

int main()
{
    int num1 = 10;
    int num2 = 20;
    int sum = add(num1, num2); // Actual Parameters
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}