#include <iostream>
#include "Singleton/Session.h"
#include "Singleton/Authorization.h"

namespace GoF {

    namespace Singleton {

        void Authorization::signOut()
        {
            authorize();
            Session::getInstance().destroySession();
        }

        void Authorization::authorize()
        {
            if ( !Session::getInstance().isOpened() ) {
                std::cout << "You are not allowed accessing the resource." << std::endl;
                exit(1);
            }
        }

    }

}
