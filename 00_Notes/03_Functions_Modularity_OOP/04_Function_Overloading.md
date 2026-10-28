Overloading Functions
Sometimes you want one function name to work with different kinds of data. In C++, this is possible through function overloading. You can write multiple versions of the same function name as long as their parameter lists differ in type, number, or order. The compiler automatically picks the correct version based on the arguments you provide. For example, a print() function could be overloaded to handle integers, strings, or doubles, each behaving slightly differently but sharing the same name. Overloading makes your code more intuitive, easier to read, and flexible, especially when designing libraries or reusable class interfaces.

Q: Which overload is called given the following code:
void g(long x)  { /*...*/ }
void g(double x){ /*...*/ }

int main() {
    float a = 3.0f;
    g(a);
}

A: g(double)
float → double is a promotion, which is preferred.
Wrong:
float → long is a conversion, not a promotion.