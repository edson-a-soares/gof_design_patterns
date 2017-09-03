#include "Adapter/Postgres_Driver.h"

namespace GoF {

    namespace Adapter {

        Postgres_Driver::Postgres_Driver()
            : driver(""),
              connected(false)
        { }

        bool Postgres_Driver::is_open()
        {
            return connected;
        }

        void Postgres_Driver::connect()
        {
            if ( driver == "dbname = db_name user = admin password = admin hostaddr = 127.0.0.1 port = 5432" ) {
                connected = true;
            }
        }

        void Postgres_Driver::init(const std::string & _driver)
        {
            driver = _driver;
        }

    }

}
