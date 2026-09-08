/*
Write a program that:

    Asks the user for the length of their password

    Then outputs:

        "Too short" if length < 6

        "Acceptable" if between 6 and 12

        "Strong" if longer than 12
*/

#include <iostream>
#include <string>

int main() {
    std::string password;
    std::cout << "Enter your password: ";
    std::getline(std::cin, password);
    int strength = password.length();
    if (strength < 6)
    {
        std::cout << "Too short\n";
    }
    else if (strength < 13)
    {
        std::cout << "Acceptable\n";
    }
    else 
    {
        std::cout << "Strong\n";
    }

    return 0;
}