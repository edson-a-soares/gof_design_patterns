#include "Facade/InventoryService.h"

namespace GoF {

    namespace Facade {

        InventoryService::InventoryService()
        { }

        bool InventoryService::isAvailable(const Car vehicle)
        {
            return true;
        }

    }

}
