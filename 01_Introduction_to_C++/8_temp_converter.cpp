#include <iostream>

int main()
{
    double temp;
    int choice;
    char ConvertAgain = 'y';

    while (ConvertAgain == 'y' || ConvertAgain == 'Y') 
    {
        std::cout << "Enter choice 1/2 , 1 for F to C & 2 for C to F\n";
        std::cin >> choice;
        if (choice ==1)
        {
            std::cout << "You have selected F to C conversion, Enter F :\n";
            std::cin >> temp;
            double Cel = (temp - 32) * (5.0/9);
            std::cout << "In Fahrenheit: "<< Cel << "\n";
        }
        if (choice ==2)
        {
            std::cout << "You have selected C to F conversion, Enter C :\n";
            std::cin >> temp;
            double Cel = (temp * 9.0/5) + 32;
            std::cout << "In Fahrenheit: "<< Cel << "\n";
        }        
        else
        {
            std::cout << "Wrong choice Idiot" <<std::endl;
        }
        std::cout << "Do you want to convert? y/n\n";
        std::cin >> ConvertAgain;
    }
    std::cout << "Goodbye!\n";


    return 0;
}
