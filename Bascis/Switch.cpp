#include <iostream>

// Given the day number, print which day of the week it is
// Assume the week starts from Monday and ends on Sunday

int main()
{
    int Day;
    std::cout << "Enter the Day Number: ";
    std::cin >> Day;
    std::cout << '\n';

    switch (Day)
    {
    case 1:
        std::cout << "Monday";
        break;
    case 2:
        std::cout << "Tuesday";
        break;
    case 3:
        std::cout << "Wednesday";
        break;
    case 4:
        std::cout << "Thursday";
        break;
    case 5:
        std::cout << "Friday";
        break;
    case 6:
        std::cout << "Saturday";
        break;
    case 7:
        std::cout << "Sunday";
        break;
    default:
        std::cout << "Enter a Valid Number";
        break;
    }

    return 0;
}
