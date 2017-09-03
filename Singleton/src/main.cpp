#include <iostream>
#include "Singleton/Session.h"
#include "Singleton/Printer.h"
#include "Singleton/Authorization.h"
#include "Singleton/Authentication.h"

using GoF::Singleton::Session;
using GoF::Singleton::Printer;
using GoF::Singleton::Authorization;
using GoF::Singleton::Authentication;

int main(int argc, char * argv[]) {

    std::string input = "";
    std::string username = "";           // username: michael
    std::string password = "";           // password: abc123
    std::string SENTINEL = "exit";

    Printer printer;
    Authorization authorization;
    Authentication authentication;

    std::cout << "Type the username: 'michael'" << std::endl;
    std::cin >> username;

    std::cout << "Type the password: 'abc123'" << std::endl;
    std::cin >> password;

    authentication.signIn(username, password);
    printer.print("\nYeah! Your Singleton is working quite well.");

    std::cout << "\nType something you want to print or 'exit' to finish:" << std::endl;

    std::cin.ignore();
    while ( input != SENTINEL ) {

        std::getline(std::cin, input);

        if ( input != "exit" ) {
            printer.print("Print: " + input);
        }

    }

    authorization.signOut();
    if ( !Session::getInstance().isOpened() ) {
        std::cout << "You finished your session successfully. \nBye." << std::endl;
    }

    return 0;

}
