#include <iostream>
#include "ChainOfResponsibility/Itau.h"

namespace GoF {

    namespace ChainOfResponsibility {

        Itau::Itau()
            : ATMBankHandler(BankOption::_ITAU)
        { }

        double Itau::withdraw(double amount) const
        {
            double cash = amount;
            std::cout << "Withdrawing $" << amount << " from Itau. Done!" << std::endl;
            return cash;
        }

    }

}
