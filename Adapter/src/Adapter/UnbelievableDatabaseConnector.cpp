#include "Adapter/UnbelievableDatabaseConnector.h"

namespace GoF {

    namespace Adapter {

        UnbelievableDatabaseConnector::UnbelievableDatabaseConnector(
            IUnbelievableAdapter * adapter
        )
            : realAdapter(adapter)
        { }

        UnbelievableDatabaseConnector::~UnbelievableDatabaseConnector()
        {
            delete realAdapter;
        }

        bool UnbelievableDatabaseConnector::isConnected()
        {
            return realAdapter->isConnected();
        }

        void UnbelievableDatabaseConnector::connect()
        {
            realAdapter->connect();
        }

    }

}
