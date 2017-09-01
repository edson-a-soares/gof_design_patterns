#include <iostream>
#include "Mediator/PedestrianControlLight.h"

namespace GoF {

    namespace Mediator {

        PedestrianControlLight::PedestrianControlLight()
            : TrafficSignal()
        { }

        PedestrianControlLight::PedestrianControlLight(
            const std::string & lightColor,
            ITrafficSignalsMediator * mediator
        )
            : TrafficSignal(lightColor, mediator)
        { }

        bool PedestrianControlLight::operator==(const ITrafficSignal & comparable) const
        {
            return this == &comparable;
        }

        void PedestrianControlLight::turnOn()
        {
            std::cout << "Pedestrian control light '" << lightColor << "' has been turned on." << std::endl;
            lightOn = true;
        }

        void PedestrianControlLight::turnOff()
        {
            std::cout << "Pedestrian control light '" << lightColor << "' has been turned off." << std::endl;
            lightOn = false;
        }

    }

}
