#include <iostream>
#include "Proxy/RealBankAccount.h"
#include "Proxy/ProxyBankAccount.h"

namespace GoF {

    namespace Proxy {

        ProxyBankAccount::ProxyBankAccount()
            : isAuthenticated(false),
              realAccount { }
        {
            init();
        }

        ProxyBankAccount::~ProxyBankAccount()
        {
            delete realAccount;
        }

        void ProxyBankAccount::init()
        {
            realAccount = new RealBankAccount();
        }

        void ProxyBankAccount::authorize()
        {
            if ( !isAuthenticated ) {
                std::cout << "You have no permission to perform the operation." << std::endl;
                exit(1);
            }
        }

        void ProxyBankAccount::signIn(const std::string & username, const std::string & password)
        {
            if ( username != "josh" || password != "abc123" ) {
                std::cout << "Your username or password is wrong." << std::endl;
                exit(1);
            }
            isAuthenticated = true;
        }

        void ProxyBankAccount::deposit(double amount)
        {
            authorize();
            realAccount->deposit(amount);
        }

        void ProxyBankAccount::printBalance()
        {
            authorize();
            realAccount->printBalance();
        }

        void ProxyBankAccount::withdraw(double amount)
        {
            authorize();
            realAccount->withdraw(amount);
        }

    }

}
