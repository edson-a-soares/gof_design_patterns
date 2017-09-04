#include "Bridge/VehicleBridge.h"

namespace GoF {

    namespace Bridge {

        VehicleBridge::VehicleBridge(IInkColor * _inkColor)
            : inkColor(_inkColor)
        { }

        VehicleBridge::~VehicleBridge()
        {
            delete inkColor;
        }

    }

}
