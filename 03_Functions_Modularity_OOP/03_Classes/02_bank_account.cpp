#include<iostream>
#include<string>
#include"02_bank_account.hpp"

BankAccount::BankAccount ()
{
    AccountHolder = "Unknown";
    Amount = 0.0;
}
BankAccount::BankAccount (std:: string name, double amount)
{
    AccountHolder = name;
    Amount = amount;
}
BankAccount::~BankAccount()
{
    std::cout << "Destructor Called" << "\n";
}

void BankAccount::show_info() const
{
    std::cout << "AccountHolder: " << AccountHolder << std::endl;
    std::cout << "Balance $ : " << Amount << std::endl;
    std::cout << "------------------------" << std::endl;
}
void BankAccount::transaction(double amount)
{
      Amount+= amount;
}