#include "iostream"

struct Rectangle
{
    double length;
    double width;
};

// CALL BY VALUE
// Copy of the actual parameter is passed to the function
// Reason: If we need the results out of member variables, then passing by value is a ideal choice
int area1(Rectangle R)
{
    return R.length * R.width;
}

// CALL BY REFERENCE
// Actual parameter is passed to the function
// Reason: If we need to modify the member variables, then passing by reference is a ideal choice
int area2(Rectangle &R)
{
    R.length += 10; 
    R.width += 10;
    return R.length * R.width;
}

// CALL BY ADDRESS
// Address of the actual parameter is passed to the function
// Reason: Similar to call by reference -> Here we need to use pointer dereferencing operator to access the member variables
int area3(Rectangle *R)
{
    R->length += 10;
    R->width += 10;
    return R->length * R->width;
}

// Example of passing array as member variable in structure using CALL BY VALUE
struct Test
{
    int A[5];
    int N;
};

void FuncTest(Test T)
{
    for(int i=0;i<T.N;i++)
    {
        std::cout << T.A[i] << " ";
    }
    std::cout << "\n";
}

// Heap memory allocation using structure
Rectangle* funcTest()
{
    Rectangle *pTemp = new Rectangle; // Dynamic memory allocation
    pTemp->length = 20;
    pTemp->width = 30;
    return pTemp;
}

int main()
 {
    Rectangle R(10,20);

    std::cout << "Area (Call by Value): " << area1(R) << std::endl;
    std::cout << "Length after call by value: " << R.length << std::endl;
    std::cout << "Width after call by value: " << R.width << std::endl;

    std::cout << "Area (Call by Reference): " << area2(R) << std::endl;
    std::cout << "Length after call by reference: " << R.length << std::endl;
    std::cout << "Width after call by reference: " << R.width << std::endl;

    std::cout << "Area (Call by Address): " << area3(&R) << std::endl;
    std::cout << "Length after call by address: " << R.length << std::endl;
    std::cout << "Width after call by address: " << R.width << std::endl;

    // Array only support CALL BY REFERENCE and CALL BY ADDRESS and doesn't support CALL BY VALUE
    // Where in the structure, we can use CALL BY VALUE for passing array as member variable
    Test T = {{1,2,3,4,5}, 5};
    FuncTest(T);

    Rectangle *P = funcTest();
    std::cout << "Length from heap memory: " << P->length << std::endl;
    std::cout << "Width from heap memory: " << P->width << std::endl;

    return 0;
}