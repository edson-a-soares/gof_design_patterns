#include "Adapter/PostgresAdapter.h"

namespace GoF {

    namespace Adapter {

        PostgresAdapter::PostgresAdapter()
            : Postgres_Driver(),
              params { }
        { }

        void PostgresAdapter::connect()
        {
            Postgres_Driver::init(
                "dbname = " + params.getDatabase() +
                " user = " + params.getUsername() +
                " password = " + params.getPassword() +
                " hostaddr = " + params.getHost() +
                " port = " + params.getPort()
            );
            Postgres_Driver::connect();
        }

        bool PostgresAdapter::isConnected()
        {
            return Postgres_Driver::is_open();
        }

        void PostgresAdapter::setParams(const UnbelievableDatabaseParams & _params)
        {
            params = _params;
        }

    }

}
