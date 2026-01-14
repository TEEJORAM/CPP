#include "iostream"
#include "TemplateClass.h"

int main()
{
    // Arithmetic<int> arInt(10,10); // Integer type
    // std::cout << "Integer Addition: " << arInt.add() << std::endl;
    // std::cout << "Integer Subtraction: " << arInt.sub() << std::endl;

    // Arithmetic<float> arFloat(10.5, 10.5); // Float type
    // std::cout << "Float Addition: " << arFloat.add() << std::endl;
    // std::cout << "Float Subtraction: " << arFloat.sub() << std::endl;

    // Arithmetic<double> arDouble(20.99, 10.33); // Double type
    // std::cout << "Double Addition: " << arDouble.add() << std::endl;
    // std::cout << "Double Subtraction: " << arDouble.sub() << std::endl;

    Arithmetic<char> arChar('A', 'B'); // Character type
    std::cout << "Character Addition: " <<  (int)arChar.add() << std::endl;
    std::cout << "Character Subtraction: " << (int)arChar.sub() << std::endl;

    return 0;
}