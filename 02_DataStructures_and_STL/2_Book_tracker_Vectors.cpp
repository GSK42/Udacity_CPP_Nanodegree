/*
Write a program that tracks how many pages a student read each day over a week.

This version uses a vector instead of a fixed-size array.

The program should:
1. Ask the user to enter 7 values (pages read each day)
2. Store those values in a std::vector
3. Print how many pages were read each day
4. Print the total pages read at the end
*/

#include <iostream>
#include <vector>

int main() {
    
    std::vector<int> pages;
    int input;
    int total = 0;
    
    std::cout << "Enter pages read each day (7 days):\n";

    for (int i=0; i < 7; i++)
    {
        std::cin >> input;
        pages.push_back(input);
        std:: cout << "Pages read on day "<< i+1 << " is : " <<input << std::endl;
        total+=input;
    }

    // Print total pages
    std::cout << "\nTotal pages: " << total << std::endl;

    return 0;
}
