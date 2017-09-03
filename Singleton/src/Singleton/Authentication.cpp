#include <iostream>
#include "Singleton/Session.h"
#include "Singleton/Authentication.h"

namespace GoF {

    namespace Singleton {

        Authentication::Authentication()
        { }

        void Authentication::signIn(const std::string & username, const std::string & password)
        {
            if ( username != "michael" || password != "abc123" ) {
                std::cout << "Whether username or password is wrong." << std::endl;
                exit(1);
            }
            Session::getInstance().startSession();
        }

    }

}
