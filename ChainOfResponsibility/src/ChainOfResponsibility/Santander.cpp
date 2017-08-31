#include <iostream>
#include "ChainOfResponsibility/Santander.h"

namespace GoF {

    namespace ChainOfResponsibility {

        Santander::Santander()
            : ATMBankHandler(BankOption::_SANTANDER)
        { }

        double Santander::withdraw(double amount) const
        {
            double cash = amount;
            std::cout << "Withdrawing $" << amount << " from Santander. Done!" << std::endl;
            return cash;
        }

    }

}
