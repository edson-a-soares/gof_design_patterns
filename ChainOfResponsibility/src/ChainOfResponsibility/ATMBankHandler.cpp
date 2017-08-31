#include <cstdlib>
#include <iostream>
#include "ChainOfResponsibility/ATMBankHandler.h"

namespace GoF {

    namespace ChainOfResponsibility {

        ATMBankHandler::ATMBankHandler()
            : next (nullptr),
              bankOption ()
        { }

        ATMBankHandler::ATMBankHandler(BankOption option)
            : next (nullptr),
              bankOption(option)
        { }

        ATMBankHandler::~ATMBankHandler()
        {
            delete next;
        }

        void ATMBankHandler::withdraw(BankOption option, double value)
        {

            if ( isOption(option) ) {
                withdraw(value);
            } else {
                if ( next == nullptr ) {
                    std::cout << "Error." << std::endl;
                    exit(1);
                }
                next->withdraw(option, value);
            }

        }

        bool ATMBankHandler::isOption(BankOption option)
        {
            return bankOption == option;
        }

        void ATMBankHandler::setNext(ATMBankHandler * handler)
        {
            if ( next == nullptr ) {
                next = handler;
            } else {
                next->setNext(handler);
            }
        }

    }

}
