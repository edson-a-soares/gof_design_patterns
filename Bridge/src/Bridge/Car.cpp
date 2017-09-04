#include <iostream>
#include "Bridge/Car.h"

namespace GoF {

    namespace Bridge {

        Car::Car(IInkColor * inkColor)
            : VehicleBridge(inkColor)
        { }

        void Car::start()
        {
            std::cout << "Starting the " << inkColor->getInkColor() << " car." << std::endl;
        }

        void Car::shutDown()
        {
            std::cout << "Shutting down the " << inkColor->getInkColor() << " car." << std::endl;
        }

    }

}
