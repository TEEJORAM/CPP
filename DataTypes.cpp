#include <iostream>
int main()
{
    // Integer Range -> [-10^9, 10^9]
    int IntMin = INT_MIN;
    int IntMax = INT_MAX;
    std::cout << "[" << IntMin << ", " << IntMax << "]" << std::endl;

    // Long Range -> [-10^12, 10^12]
    long longMin = LONG_MIN;
    long longMax = LONG_MAX;
    std::cout << "[" << longMin << ", " << longMax << "]" << std::endl;

    // Long Long Range -> [-10^18, 10^18]
    long long llongMin = LONG_LONG_MIN;
    long long llongMax = LONG_LONG_MAX;
    std::cout << "[" << llongMin << ", " << llongMax << "]" << std::endl;

    //// NOTE
    // By default, std::cout prints Floating-Point Numbers with only 6 Significat Digits
    // That's why float is printed as 7.12345 instead of 7.1234567
    // And double is printed as 15.123 instead of 15.1234567891011

    //  We can use #include <iomanip> to control the number of decimal places & set the precision
    // Example: std::cout << std::fixed << std::setprecision(7) OR setprecision(15);

    // Float Range - stores decimal precision of 7[N.000000] Including N 
    float FEx = 7.1234567;
    std::cout << "Float: " << FEx << std::endl;

    // Double Range - stores decimal precision of 15[N.00000000000000] Including N
    double DEx = 15.12345678910111;
    std::cout << "Double: " << DEx << std::endl;

    // Character Type - stores single character using single quote (' ')
    char CEx = 'A';
    std::cout << CEx << std::endl;

    // String[CLASS] Type - stores sequence of characters in double quote (" ")
    std::string Name = "CPP";
    std::cout << Name << std::endl;

    return 0;
}