#include <iostream>
#include "Mediator/SemaphoreLight.h"

namespace GoF {

    namespace Mediator {

        SemaphoreLight::SemaphoreLight()
            : TrafficSignal()
        { }

        SemaphoreLight::SemaphoreLight(
            const std::string & lightColor,
            ITrafficSignalsMediator * mediator
        )
            : TrafficSignal(lightColor, mediator)
        { }

        bool SemaphoreLight::operator==(const ITrafficSignal & comparable) const
        {
            return this == &comparable;
        }

        void SemaphoreLight::turnOn()
        {
            std::cout << "Semaphore light '" << lightColor << "' has been turned on." << std::endl;
            lightOn = true;
        }

        void SemaphoreLight::turnOff()
        {
            std::cout << "Semaphore light '" << lightColor << "' has been turned off." << std::endl;
            lightOn = false;
        }

    }

}
