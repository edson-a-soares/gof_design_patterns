#include <iostream>
#include "Proxy/RealBankAccount.h"

namespace GoF {

    namespace Proxy {

        RealBankAccount::RealBankAccount()
            : balance(0.0)
        { }

        void RealBankAccount::printBalance()
        {
            std::cout << "\nYour balance is: " << balance << std::endl;
        }

        void RealBankAccount::deposit(double amount)
        {
            if ( amount <= 0 ) {
                std::cout << amount << " is not a valid amount for making a deposit." << std::endl;
            } else {
                balance = balance + amount;
                std::cout << "You made a deposit of the amount " << amount << std::endl;
            }
        }

        void RealBankAccount::withdraw(double amount)
        {
            if ( balance < amount ) {
                std::cout << "You have no balance to perform a withdraw operation." << std::endl;
            } else {
                balance = balance - amount;
                std::cout << "You made a withdraw of the amount " << amount << std::endl;
            }
        }

    }

}
