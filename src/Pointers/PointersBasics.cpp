#include "iostream"

// Pointers:
// 1. Address variable that stores address of another variable that stores data
// 2. Use to indirectly access and manipulate data stored in another variable

// Address Variable Declaration:
// data_type *pointer_variable_name -> int* ptr;

// STACK MEMORY ALLOCATION->
// Initialization of Pointer:
// 1. Using adress operator (&) to get address of variable
// int A = 10;
// ptr = &A;
// NOTE: Don't use * operator during initialization like *ptr = &A; -> Compile Error

// Dereferencing Pointer:
// 1. Using dereference operation (*) to access/modify data at stored address
// int value = *ptr;

// HEAP MEMORY ALLOCATION->
// 1. Using malloc() to allocate Heap Memory in C
// ptr = malloc(N * sizeof(data_type));
// Here malloc returns void* which need to be typecasted to appropriate data_type*
// so ptr = (data_type*) malloc(N * sizeof(data_type));

// 2. Using new operator to allocate Heap Memory in C++
// ptr = new data_type[N];

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    // Declare + Initialization of data variable
    int A = 10;

    // Declare + Initialization of pointer variable
    int *ptr = &A;

    // ptr = &A; // VALID WHY?
    // &A is an address and ptr stores the address i.e Address -> Address (MATCH) 

    // *ptr = &A; -> NOT VALID, WHY?
    // *ptr means value at an address and &A is an address so assigning Address -> Value at an address(MISMATCH)

    // THEN HOW int *ptr = A; -> VALID, WHY?
    // Creates pointer and initialize a valid address immediately in single statement

    // WHERE IN int *ptr; *ptr = &A; -> NOT VALID, WHY?
    // Creates pointer (uninitialized) i.e didn't give valid address to store. Then try to assign address to value at an address(MISMATCH)
    std::cout << "Value of A: " << A << std::endl;
    std::cout << "Address of A: " << &A << std::endl;
    std::cout << "Value of ptr (Address of A): " << ptr << std::endl;
    std::cout << "Value at address stored in ptr (Value of A): " << *ptr << std::endl;

    // Array using pointer
    std::cout << "Array using pointer:" << std::endl;

    // USING STACK MEMORY ALLOCATION
    int Arr[5] = {10, 20, 30, 40, 50};
    int *pArr = Arr; 
    // NOTES: Array names means address of first element of array. More Explanation:
    // Arr  -> Arr[0] -> 10
    // pArr ->->->->->-> Arr[0]
    // Arr is not a pointers. Just name representing address of first element of array
  
    // USING HEAP MEMORY ALLOCATION IN C
    int *pArr2;
    pArr2 = (int*) malloc(5*sizeof(int));
    // INITIALIZATION
    pArr2[0] = 100;
    pArr2[1] = 200; 
    pArr2[2] = 300;
    pArr2[3] = 400;
    pArr2[4] = 500;

    std::cout << "Using malloc()" << std::endl;
    for(int i=0;i<5;i++)
    {
        std::cout << pArr2[i] << " ";
    }
    std::cout << std::endl;
    free(pArr2);

    // USING HEAP MEMORY ALLOCATION IN C++
    int *pArr3;
    pArr3 = new int[5];

    // INITIALIZATION
    pArr3[0] = 1000;
    pArr3[1] = 2000;
    pArr3[2] = 3000;
    pArr3[3] = 4000;
    pArr3[4] = 5000;


    for(int i=0;i<5;i++)
    {
        std::cout << pArr3[i] << " ";
    }
    std::cout << std::endl;
    delete[] pArr3;
  
    // SIZE OF POINTERS
    int* p1;
    char* p2;
    float* p3;
    double* p4;
    struct Rectangle* p5;

    std::cout << "Size of int* p1: " << sizeof(p1) << " bytes" << std::endl;
    std::cout << "Size of char* p2: " << sizeof(p2) << " bytes" << std::endl;
    std::cout << "Size of float* p3: " << sizeof(p3) << " bytes" << std::endl;
    std::cout << "Size of double* p4: " << sizeof(p4) << " bytes" << std::endl;
    std::cout << "Size of Rectangle* p5: " << sizeof(p5) << " bytes" << std::endl;

    // Size of all pointers was 4 bytes on 32-bit system and 8 bytes on 64-bit system
    // All pointers have the same size regardless of data-type they point to

    // NOTES:
    //->Pointers size doesn't depend on data-type they point to
    //->Type affects only dereferencing operation, not size of pointer

    // To confirm architecture
    std::cout << "Size of Void: " << sizeof(void*) << " bytes" << std::endl;

    // Pointers size depends on how program is compiled (32-bit or 64-bit) and not on data-type and operating system
    // Current compilers is 64bit, but size of void shown 4 bytes because project is configured to use 32-bit archiecture
    return 0;
}