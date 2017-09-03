#include "Adapter/MySQL_Driver.h"

namespace GoF {

    namespace Adapter {

        MySQL_Driver::MySQL_Driver()
            : connected(false)
        { }

        bool MySQL_Driver::isValid()
        {
            return connected;
        }

        void MySQL_Driver::connect(
            const std::string & server,
            const std::string & username,
            const std::string & password)
        {
            if ( server == "tcp://localhost:3360" && username == "admin" && password == "admin" ) {
                connected = true;
            }
        }

    }

}
