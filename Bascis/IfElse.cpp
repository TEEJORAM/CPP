#include <iostream>
int main()
{
    int Age;
    std::cout << "Enter your Age: ";
    std::cin >> Age;

    /*Given an Integer Age
    If Age >= 18, print "Adult"
    If Age < 18 and Age >= 10, print "Teen"
    If Age < 10, print "Child"*/

    if (Age >= 18)
        std::cout << "Adult" << std::endl;
    else if(Age < 18 && Age >=10)
        std::cout << "Teen" << std::endl;
    else if(Age < 10)
        std::cout << "Child" << std::endl; 
    else
        return 0;

    /* Given the marks of a student, print the grade he/she is getting following the below rules
    - Grade A (>=90)
    - Grade B (>=70 and < 90)
    - Grade C (>=50 and < 70)
    - Grade D (>=35 and < 50)\
    - Fail (< 35)*/
    
    float Mark;
    std::cout << "Enter your Mark: ";
    std::cin >> Mark;

    if (Mark >= 90)
       std::cout << "Grade A" << std::endl;
    else if (Mark >= 70 && Mark < 90)
       std::cout << "Grade B" << std::endl;
    else if (Mark >= 50 && Mark < 70)
       std::cout << "Grade C" << std::endl;
    else if (Mark >= 35 && Mark < 50)
       std::cout << "Grade D" << std::endl;
    else
       std::cout << "Fail";


    /* You're given three Integers A,B and C
    Print which of these integers is the largest
    If two or more Integers are equal and are the largest,
    program should indicate that as well
    */

   // This works once if all inputs are entered in a single line separated by spaces (Ex: 5 10 15)
    int A, B, C;
    std::cout << "Enter values of A, B, and C: ";
    std::cin >> A >> B >> C;

    if (A==B && B==C)
       std::cout << "All three numbers are equal" << std::endl;
    else if (A>=B && B>=C)
    {
        if (A==B || A == C)
           std::cout << "Largest Number is " << A << "With Tie" << std::endl;
        else
           std::cout << "Largest Number is " << A << std::endl; 
    }
    else if (B>=A && B>=C)
    {
        if (B==A || B==C)
           std::cout << "Largest Number is " << B << "With Tie" << std::endl;
        else
           std::cout << "Largest Number is " << B << std::endl;  
    }
    else
    {
        std::cout << "Largest Number is " << C << std::endl;
    }
    return 0;
}