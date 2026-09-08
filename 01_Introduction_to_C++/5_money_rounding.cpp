/*
What is the printed value? Is it exactly 1699?

Try prices like 25.87 or 18.44. Does it always round correctly?

Fix the code by rounding properly using a static cast.
*/
#include <iostream>

int main() {
    float price = 25.87;
    float discount = 0.15; // 15%
    float finalPrice = price * (1-discount);
    std::cout << "finalPrice: " << (finalPrice * 100 + 0.5) << std::endl;
    int cents = static_cast<int>(finalPrice * 100 + 0.5);
    std::cout << "Final price in cents: " << cents << std::endl;
    return 0;
}
