/*
You’re writing a health system for a game. The function takeDamage() should reduce a player’s health. 
But only one of these versions works.

Implement both of the following:

    void takeDamageValue(int health, int damage) // value

    void takeDamageReference(int& health, int damage) // reference

In main(), test both and print the resulting health.


*/

#include <iostream>

// TODO: implement takeDamageValue
void takeDamageValue(int health, int damage)
{
    health -= damage;
}
// TODO: implement takeDamageReference
void takeDamageReference(int& health, int damage)
{
    health -= damage;
}
int main() 
{
    int playerHealth = 100;
    //Using auto, compiler assigns type based on assignment
    auto damage = 30;

    // TODO: call takeDamageValue with a damage of 30
    takeDamageValue(playerHealth,damage);
    std::cout << "Health(value): " << playerHealth << std::endl;

    // TODO: call takeDamageReference with a damage of 30
    takeDamageReference(playerHealth,damage);
    std::cout << "Health(reference): " << playerHealth << std::endl;

    return 0;
}

/*  Reflect: Why does one work and the other not?
    Answer :
    Pass by value : Only the local copy changes. When the function returns, that copy disappears, 
    and playerHealth remains 100.The function modifies its own local variable, not the original variable in main().
    Pass by Reference : Both names refer to the same underlying variable, so the original health changes to 70.
*/
