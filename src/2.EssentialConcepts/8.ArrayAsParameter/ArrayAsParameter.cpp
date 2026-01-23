#include "iostream"

// Here [] denote that parameter is an array
void Func1(int arr[], int size)
{
    std::cout << "Inside Func1 - Using arr[] syntax:" << std::endl;
    for(int i = 0; i < size; i++)
    {
        std::cout << "Element " << i << ": " << arr[i] << std::endl;
    }
}

// Here * denote that parameter is a pointer
void Func2(int* arr, int size)
{
    std::cout << "Inside Func2 - Using int* syntax:" << std::endl;
    for(int i=0; i < size; i++)
    {
        std::cout << "Element " << i << ": " << arr[i] << std::endl;
    }
}

void Func3(int arr[])
{
    std::cout << "Inside Func3 - Demonstrating array to pointer decay:" << std::endl;
    std::cout << "Size of arr parameter using sizeof: " << sizeof(arr) << " bytes" << std::endl;
    // OUTPUT will be size of pointer (8 bytes on 64-bit system) instead of size of entire array
    // This is because arr decays to pointer to first element of array
}

int * Func4 (int size)
{
    int *P;
    P = new int[size];
    for (int i=0; i < size; i++)
    {
        P[i] = (i + 1) * 10;
    }
    return P;
}

int main()
{
    int A[5] = {10, 20, 30, 40, 50};
    
    // Passing array to function
    // Func1(A, 5);
    // Func2(A, 5);
    
   // we may doubt that both arr[] and int* does same work by arr[i] syntax - KNOW THE DIFFERENCE->
   /*
   1. An array is fixed size object that stores elements in contiguous memory whereas pointer is a variable that stores an address.
   2. An array name represents the represents the entire array & gets fixed address at compile time. Also cannot be reassigned whereas pointer can be reassigned to a pointer
   3. In most expression,s an array name decays i.e array name is converted by compiler to pointer to it's first element
      Like: A -> &A[0] (Type becomes from int[] to int*). Because of array to pointer decay:
           - A and &A[0] gives same address
           - arr[i] works the same for arrays and pointers
   4. Array to pointer decay doesn't occur when:
      - Using sizeof(A) -> Returns total array size
      - Using &A -> Yields pointer to the ENTIRE ARRAY (Type is int (*)[size])
   5. Although A and &A prints the same address, they're different types:
      - A is of type int* after decay
      - &A is of type int (*)[size]
   6. Example: Pointer arithmetic depends on type
      - A + 1 -> Moves by sizeof(int) bytes
      - &A + 1 -> Moves by sizeof(int[size]) bytes
   */
  
   // Demonstrating difference between A and &A
    std::cout << "Address using A: " << A << std::endl;
    std::cout << "Address using &A: " << &A << std::endl;
    // OUTPUT:
    // Address using A: 0x16fdfed50
    // Address using &A: 0x16fdfed50
    
    // Although both prints same address, their types are different
    std::cout << "Address using A + 1: " << A + 1 << std::endl;
    std::cout << "Address using &A + 1: " << &A + 1 << std::endl;
    // OUTPUT:
    // Address using A + 1: 0x16fdfed54 -> Types is int* and moves by sizeof(int) bytes
    // Address using &A + 1: 0x16fdfed64 -> Type is int (*)[5] and moves by sizeof(int[5]) bytes
    
    // ARRAYS ARE ALWAYS PASSED BY ADDRESS IN C++
    std::cout << "Size of entire array A using sizeof: " << sizeof(A) << " bytes" << std::endl;
    // OUTPUT: Size of entire array A using sizeof: 20 bytes (5 * sizeof(int) = 5 * 4 = 20 bytes)
    
    // Where as in Func3, arr decays to pointer to first element
    Func3(A);
    
    
    int *aPtr = Func4(5);
    std::cout << "Array created inside Func4 and returned pointer to first element:" << std::endl;
    for(int i = 0; i < 5; i++)
    {
        std::cout << "Element " << i << ": " << aPtr[i] << std::endl;
    }
    delete[] aPtr; 
    return 0;
}