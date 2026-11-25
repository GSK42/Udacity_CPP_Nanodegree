#include<iostream>

class Add
{
    public:
    // This is a functor (function object): a class that overloads the call operator (), so its objects can be used like functions.
    // operator() is a special member function. Defining it means "this object can be called with parentheses."
    // Const after the parameters promises the call won't modify the object
    int operator()(int a, int b) const 
    {
        // The first () is part of the name, operator(). The second (int a, int b) is the parameter list.
        return a + b;
    }
};

int main()
{
    Add add;
    // This looks like a function call, but the compiler treats it as add.operator()(3, 4). It returns 7, stored in result.
    int result = add (3,4);
    std::cout  << result << std::endl;
}