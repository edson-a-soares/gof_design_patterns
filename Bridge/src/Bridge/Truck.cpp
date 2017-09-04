#include <iostream>
#include "Bridge/Truck.h"

namespace GoF {

    namespace Bridge {

        Truck::Truck(IInkColor * inkColor)
            : VehicleBridge(inkColor)
        { }

        void Truck::start()
        {
            std::cout << "Starting the " << inkColor->getInkColor() << " truck." << std::endl;
        }

        void Truck::shutDown()
        {
            std::cout << "Shutting down the " << inkColor->getInkColor() << " truck." << std::endl;
        }

    }

}
