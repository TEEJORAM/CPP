#include <iostream>
int main()
{
    int Num = 10;
    // Memory Address
    std::cout << "Memory Addres: " << &Num << std::endl;

    // SArray - Static Memory Allocation
    int SArray[10];
    std::cout << "Size of SArray: " << sizeof(SArray) << std::endl;
    std::cout << "Size of One Integer: " << sizeof(int) << std::endl;
    std::cout << "Memory Address of SArray: " << SArray << std::endl;

    // Input And Output
    int s = sizeof(SArray)/sizeof(int);
    for(int i=0;i<s;i++)
    {
        std::cout << "Enter Number below l0: ";
        std::cin >> SArray[i];
    }

    // Showcase
    for(int i=0;i<s;i++)
    {
        std::cout << SArray[i] << " ";
    }
    std::cout<<'\n';

    // Array - Heap Memory Allocation
    int HArray;
    std::cout << "Enter the size of your Array:";
    std::cin >> HArray;

    int *Array = new int[HArray];
    std::cout << "Size of Array: " << sizeof(Array) << std::endl;
    std::cout << "Size of Aloacted Memory:" << HArray * sizeof(Array) << std::endl;
    std::cout << "Memory Address of Allocated Array:" << Array << std::endl;

    // Input And Output
    for(int i=0;i<HArray;i++)
    {
        std::cout << "Enter Number below l0: ";
        std::cin >> Array[i];
    }

    // Showcase
    for(int i=0;i<HArray;i++)
    {
        std::cout << Array[i] << " ";
    }
    delete [] Array;
    return 0;
}