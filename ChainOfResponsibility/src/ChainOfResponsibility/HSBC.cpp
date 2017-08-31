#include <iostream>
#include "ChainOfResponsibility/HSBC.h"

namespace GoF {

    namespace ChainOfResponsibility {

        HSBC::HSBC()
            : ATMBankHandler(BankOption::_HSBC)
        { }

        double HSBC::withdraw(double amount) const
        {
            double cash = amount;
            std::cout << "Withdrawing $" << amount << " from HSBC. Done!" << std::endl;
            return cash;
        }

    }

}
