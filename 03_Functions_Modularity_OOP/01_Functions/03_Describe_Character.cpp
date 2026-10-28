/* Instructions
Write a function describe that takes a string and prints a character’s name.
Write a function describe that takes an integer and prints the character’s level.
Write a function describe that takes two doubles and prints the character’s location as coordinates.
Write a function describe that takes a boolean and prints whether the character is alive or dead.
In main(), call each overloaded version with the provided test data.
Complete all TODOs in the code before running. */

/*
You’re designing a game where different characters and items need to be described on screen. 
Create a set of overloaded describe() functions that handle the following cases:

    A character name – print "Character: [name]"

    A character’s level – print "Level: [level]"

    A pair of coordinates – print "Location: ([x], [y])"

    A boolean flag for whether the character is alive – print "Status: Alive" or "Status: Dead"

Write a main() function that calls each version of describe() with appropriate data.
*/

#include <iostream>
#include <string>

// TODO: Write a function named describe that takes a string and prints "Character: [name]"
// Pass by reference used
void describe(const std::string& name)
{
    std::cout << "Character: " << name << std::endl;
}
// TODO: Write a function named describe that takes an int and prints "Level: [level]"
void describe(int level)
{
    std::cout<< "Level: " << level << std::endl;
}

// TODO: Write a function named describe that takes two doubles and prints "Location: ([x], [y])"
void describe(double x, double y)
{
    std::cout<< "Location: "<< x << "," << y << std::endl;
}

// TODO: Write a function named describe that takes a bool and prints "Status: Alive" or "Status: Dead"
void describe(bool Status)
{
    std::cout<< "Status: " << Status << std::endl;
}

int main()
{
    std::string name = "Ryan";
    int level = 7;
    double x = 13.2, y = 42.9;
    bool alive = true;

    describe(name);
    describe(level);
    describe(x,y);
    describe(alive);

    return 0;
    
}