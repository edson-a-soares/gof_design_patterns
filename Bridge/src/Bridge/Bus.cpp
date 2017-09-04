#include <iostream>
#include "Bridge/Bus.h"

namespace GoF {

    namespace Bridge {

        Bus::Bus(IInkColor * inkColor)
            : VehicleBridge(inkColor)
        { }

        void Bus::start()
        {
            std::cout << "Starting the " << inkColor->getInkColor() << " bus." << std::endl;
        }

        void Bus::shutDown()
        {
            std::cout << "Shutting down the " << inkColor->getInkColor() << " bus." << std::endl;
        }

    }

}
