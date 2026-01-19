#pragma once

// class Arithmetic
// {
//     private:
//         int a;
//         int b;
//     public:
//         Arithmetic();
//         Arithmetic(int a, int b);
//         int add();
//         int sub();
//         ~Arithmetic();
// };

// Above is simple Arithmetic class for integer data type
// where in Template class -> 
// Any type of data type can be used and this provides the developer efficiency and avoid redundant codes

// SYNTAX:
// template <template_name parameter>
// template_name: class or typename
// parameter: Placeholder for data types

template <class T>
class Arithmetic
{
    private:
        T a;
        T b;
    public:
        Arithmetic();
        Arithmetic(T a, T b);
        T add();
        T sub();
        ~Arithmetic();
};

// Handling template class

// Default constructor
template <class T>
Arithmetic<T>::Arithmetic() : a(1), b(1) {}
// Here <template_name> specified before scope resolution to inform compiler
// that class is template class and T is placeholder for data type

// Parameterized constructor
template <class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
    // 'this' pointer used to refer the current object's member variables
    this->a = a;
    this->b = b;
}

// Addition
template <class T>
T Arithmetic<T>::add()
{
    return a + b;
}

// Subtraction
template <class T>
T Arithmetic<T>::sub()
{
    return a - b;
}

// Destructor
template <class T>
Arithmetic<T>::~Arithmetic() {}