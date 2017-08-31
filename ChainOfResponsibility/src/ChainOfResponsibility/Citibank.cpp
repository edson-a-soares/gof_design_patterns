#include <iostream>
#include "ChainOfResponsibility/Citibank.h"

namespace GoF {

    namespace ChainOfResponsibility {

        Citibank::Citibank()
            : ATMBankHandler(BankOption::_CITIBANK)
        { }

        double Citibank::withdraw(double amount) const
        {
            double cash = amount;
            std::cout << "Withdrawing $" << amount << " from Citibank. Done!" << std::endl;
            return cash;
        }

    }

}
