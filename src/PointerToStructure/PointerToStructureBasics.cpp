#include "iostream"

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    Rectangle R = {10, 5};
    Rectangle *pR = &R;
    
    // Using structure variable to acess/modify members
    std::cout << "Using structure variable R:" << std::endl;
    std::cout << "Length: " << R.length << ", Breadth: " << R.breadth << std::endl;
    R.length = 15;
    R.breadth = 10;
    std::cout << "After modification - Length: " << R.length << ", Breadth: " << R.breadth << std::endl;

    // Using pointer to structure to acess/modify members
    std::cout << "Using pointer to structure pR:" << std::endl;
    // Hardcoded way to access structure member using pointer
    std::cout << "Length: " << (*pR).length << ", Breadth: " << (*pR).breadth << std::endl;

    // C++ way to access structure member using pointer
    pR->length = 20;
    pR->breadth = 15;
    std::cout << "Length: " << pR->length << ", Breadth: " << pR->breadth << std::endl;

    // Creating Heap memory allocation for structure using pointer
    std::cout << "Heap memory allocation for structure using pointer on C" << std::endl;
    Rectangle *pR2 = (Rectangle*)malloc(sizeof(Rectangle)); // C way
    pR2->length = 25;
    pR2->breadth = 20;
    std::cout << "Length: " << pR2->length << ", Breadth: " << pR2->breadth << std::endl;

    // Creating Heap memory allocation for structure using pointer in C++
    std::cout << "Heap memory allocation for structure using pointer on C++" << std::endl;
    Rectangle *pR3 = new Rectangle;
    pR3->length = 30;
    pR3->breadth = 25;
    std::cout << "Length: " << pR3->length << ", Breadth: " << pR3->breadth << std::endl;

    // Deallocation of Heap memory
    free(pR2);
    delete pR3;
    return 0;
}