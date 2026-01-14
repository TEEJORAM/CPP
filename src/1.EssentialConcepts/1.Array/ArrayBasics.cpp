#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter the size of the Array: ";
    cin >> N; 

    // In C++, array sizes must be known at Compile Time
    // NOTE: int A[N]
    // Causes error because N is known only at Runtime.
    // Stack array allocation i.e Works only if N is compile time constant  
    

    // Heap Array allocation where N is determined at Runtime
    // NOTES: 
    // 1. Use 'new' keyword to allocate array on Heap
    // 2. Remember to 'delete' the allocated memory using 'delete[]' to avoid memory leaks
    
    // TIPS:
    // 1. new int[N]; Uninitialized array (Garbage Values)
    // 2. new int[N](); Value Initialized(Zeros)
    int *A = new int[N];

    cout << "Enter " << N << " values of Array: " << endl;
    // Initialization
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    // Display the array
    cout << "Array elements are: ";
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }
    delete[] A;
    return 0;
}