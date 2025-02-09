#include <iostream>

int main()
{
    std::string str("CUDAUSINGCPP");
    // or std::string str = "CUDAUSINGCPP" -> Operator Overloading

    int length = str.size();
    for(int i=0;i<length;i++)
    {
        std::cout << str[i];
    }
    return 0;
}