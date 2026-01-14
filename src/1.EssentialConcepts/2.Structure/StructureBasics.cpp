#include "iostream"


// Group of related data members 
// Definition of structure variable
struct Rectangle
{
    int length; // 4 Bytes and needs 4 byte alignment
    int breadth; // 4 Bytes and needs 4 byte alignment
    char color; // 1 Byte and needs 1 byte alignment

    // Expected size: 8 + 1 = 9 Bytes
    // Actual size: 8 + 4 = 12 Bytes (Due to padding for alignment)    

    // Alignment and Padding Explanation:
    // Each data type has an alignment requirement
    // char -> alignment of 1 byte
    // int  -> alignment of 4 bytes 

    // Structure's alignment is decided by member with largest alignment requirement
    // In this case. int has largest alignment requirements of 4 bytes, so total size of structure must be multiple of 4 bytes
    // char takes only 1 byte, so compiler adds 3 unusead bytes after char(PADDING) to satisfy 4-byte alignment rule  
}; 


// Global structure variable 
struct Rectangle r1;
int main()
{
    // Declare structure variable
    r1 = {10, 20, 'P'};
    std::cout << "Size of Rectangle r1: " << sizeof(r1) << std::endl;
    
    // Access structure members using dot operator
    std::cout << "Length: " << r1.length << std::endl;
    std::cout << "Breadth: " << r1.breadth << std::endl;
    std::cout << "Color: " << r1.color << std::endl;
    
    // After modifying structure members
    std::cout << "After modifying structure members:" << std::endl;
    r1.length = 40;
    r1.breadth = 50;
    r1.color = 'Q';
    std::cout << "Length: " << r1.length << std::endl;  
    std::cout << "Breadth: " << r1.breadth << std::endl;
    std::cout << "Color: " << r1.color << std::endl; 

    return 0;
}