#include <iostream>
#include "Bridge/Motorcycle.h"

namespace GoF {

    namespace Bridge {

        Motorcycle::Motorcycle(IInkColor * inkColor)
            : VehicleBridge(inkColor)
        { }

        void Motorcycle::start()
        {
            std::cout << "Starting the " << inkColor->getInkColor() << " bicycle." << std::endl;
        }

        void Motorcycle::shutDown()
        {
            std::cout << "Shutting down the " << inkColor->getInkColor() << " bicycle." << std::endl;
        }

    }

}
