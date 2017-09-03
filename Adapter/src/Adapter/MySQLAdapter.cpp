#include "Adapter/MySQLAdapter.h"

namespace GoF {

    namespace Adapter {

        MySQLAdapter::MySQLAdapter()
            : MySQL_Driver(),
              params { }
        { }

        void MySQLAdapter::connect()
        {
            MySQL_Driver::connect(
                "tcp://" + params.getHost() + ":" + params.getPort(),
                params.getUsername(),
                params.getPassword()
            );
        }

        bool MySQLAdapter::isConnected()
        {
            return MySQL_Driver::isValid();
        }

        void MySQLAdapter::setParams(const UnbelievableDatabaseParams & _params)
        {
            params = _params;
        }

    }

}
