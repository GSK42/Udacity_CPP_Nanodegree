#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H
#include<string>

class BankAccount
{
    private:
        std::string AccountHolder;
        double Amount = 0.0; 
    
    
    public:
        BankAccount ();
        BankAccount (const std:: string name, double amount);
        ~BankAccount ();
        void show_info() const;
        void transaction(double amount) ;
        

};
#endif