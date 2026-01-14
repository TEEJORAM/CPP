// #include "TemplateClass.h"

// // Default constructor
// Arithmetic::Arithmetic() : a(1), b(1) {}

// // Parameterized constructor
// Arithmetic::Arithmetic(int a, int b)
// {
//     // 'this' pointer used to refer the current object's member variables
//     this->a = a;
//     this->b = b;
// }

// // Addition
// int Arithmetic::add()
// {
//     return a + b;
// }

// // Subtraction
// int Arithmetic::sub()
// {
//     return a - b;
// }

// // Destructor
// Arithmetic::~Arithmetic() {}





// Handling template class

// // Default constructor
// template <class T>
// Arithmetic<T>::Arithmetic() : a(1), b(1) {}
// // Here <template_name> specified before scope resolution to inform compiler
// // that class is template class and T is placeholder for data type

// // Parameterized constructor
// template <class T>
// Arithmetic<T>::Arithmetic(T a, T b)
// {
//     // 'this' pointer used to refer the current object's member variables
//     this->a = a;
//     this->b = b;
// }

// // Addition
// template <class T>
// T Arithmetic<T>::add()
// {
//     return a + b;
// }

// // Subtraction
// template <class T>
// T Arithmetic<T>::sub()
// {
//     return a - b;
// }

// // Destructor
// template <class T>
// Arithmetic<T>::~Arithmetic() {}


// With above template changes in TemplateClass.cpp file,
// Compiler will gives error as it doesn't know which data type to substitute for T

// To resolve this issue, Template class's implementation should be in the header files itself
// not in separate .cpp file -> 
// because compiler needs to see complete template definition to instantiate template class for each type used

// Hence, we will move all the implementation code from this .cpp file to TemplateClass.h file