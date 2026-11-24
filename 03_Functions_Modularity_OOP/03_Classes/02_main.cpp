#include<string>
#include"02_bank_account.hpp"
int main()
{
    BankAccount b1;
    b1.show_info();

    BankAccount b2("Max",2500);
    b2.show_info();
    b2.transaction(25.00);
    b2.show_info();
    return 0;
}