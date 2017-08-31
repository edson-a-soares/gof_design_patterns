#include <iostream>
#include "ChainOfResponsibility/ATMStation.h"

namespace GoF {

    namespace ChainOfResponsibility {

        ATMStation::ATMStation(ATMBankHandler * handler)
            : option (),
              bankHandler (handler)
        { }

        ATMStation::~ATMStation()
        {
            delete bankHandler;
        }

        void ATMStation::withdraw(double amount)
        {
            bankHandler->withdraw(option, amount);
            std::cout << "Take your money from the dispenser." << std::endl;
        }

        void ATMStation::setBankOption(BankOption _option)
        {
            option = _option;
        }

    }

}
