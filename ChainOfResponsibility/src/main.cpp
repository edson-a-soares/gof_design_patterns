#include <iostream>
#include "ChainOfResponsibility/Itau.h"
#include "ChainOfResponsibility/HSBC.h"
#include "ChainOfResponsibility/Citibank.h"
#include "ChainOfResponsibility/Santander.h"
#include "ChainOfResponsibility/ATMStation.h"

using GoF::ChainOfResponsibility::Itau;
using GoF::ChainOfResponsibility::HSBC;
using GoF::ChainOfResponsibility::Citibank;
using GoF::ChainOfResponsibility::Santander;
using GoF::ChainOfResponsibility::ATMStation;
using GoF::ChainOfResponsibility::BankOption;
using GoF::ChainOfResponsibility::ATMBankHandler;

int main(int argc, char * argv[]) {

    std::cout << "\nSelect the bank option to perform the withdraw:\n" << std::endl;
    std::cout << "1. Itau\n"
                 "2. HSBC\n"
                 "3. Citibank\n"
                 "4. Santander\n" << std::endl;

    int option;
    double amount;
    ATMBankHandler * chain = new Itau();
        chain->setNext(new HSBC());
        chain->setNext(new Citibank());
        chain->setNext(new Santander());

    ATMStation atmStation = ATMStation(chain);

    std::cin >> option;
    switch (option) {

        case 1:
            atmStation.setBankOption(BankOption::_ITAU);
            break;

        case 2:
            atmStation.setBankOption(BankOption::_HSBC);
            break;

        case 3:
            atmStation.setBankOption(BankOption::_CITIBANK);
            break;

        case 4:
            atmStation.setBankOption(BankOption::_SANTANDER);
            break;

        default:
            std::cout << "Invalid Option" << std::endl;
            exit(1);

    }

    std::cout << "Enter amount you want to withdraw:" << std::endl;
    std::cin >> amount;
    atmStation.withdraw(amount);

    return 0;

}
