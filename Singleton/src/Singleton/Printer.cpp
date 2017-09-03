#include <iostream>
#include "Singleton/Printer.h"
#include "Singleton/Authorization.h"

namespace GoF {

    namespace Singleton {

        Printer::Printer()
        { }

        void Printer::print(const std::string & content)
        {
            Authorization authorization;
            authorization.authorize();

            std::cout << content << std::endl;
        }

    }

}
