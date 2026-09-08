/*
Write a program that:

    Starts with $0 in savings

    Repeatedly adds $100 every month

    Tracks how many months it takes to reach or exceed the target
*/

#include<iostream>

int main()
{
    int goal = 750;
    int month = 0;
    int savings = 0;
    while (savings < goal)
    {
        month ++;
        savings+=100;
        std::cout << "Current month   : " << month << "," 
        << "Current savings : " << savings << std::endl;
        
    }
    std::cout << "Months needed to reach the goal: " << month << std::endl;

    return 0;
}

