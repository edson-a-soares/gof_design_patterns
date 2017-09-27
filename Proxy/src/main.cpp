#include <iostream>
#include "Proxy/ProxyBankAccount.h"

using GoF::Proxy::ProxyBankAccount;

int main(int argc, char * argv[]) {

    ProxyBankAccount proxyAccount;
    proxyAccount.signIn("josh", "abc123");

    proxyAccount.printBalance();
    proxyAccount.withdraw(50.0);
    proxyAccount.deposit(1000.00);
    proxyAccount.withdraw(100.0);
    proxyAccount.printBalance();

    return 0;

}
