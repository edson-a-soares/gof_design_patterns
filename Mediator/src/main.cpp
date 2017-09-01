#include <iostream>
#include "Mediator/Signal.h"
#include "Mediator/SemaphoreLight.h"
#include "Mediator/PedestrianControlLight.h"

using GoF::Mediator::Signal;
using GoF::Mediator::TrafficSignal;
using GoF::Mediator::SemaphoreLight;
using GoF::Mediator::PedestrianControlLight;
using GoF::Mediator::TrafficSignalsMediator;
using GoF::Mediator::ITrafficSignalsMediator;

int main(int argc, char * argv[]) {

    ITrafficSignalsMediator * mediator = new TrafficSignalsMediator();

    TrafficSignal * redLight = new SemaphoreLight("Red", mediator);
    mediator->registerTrafficSignal(Signal::SEMAPHORE_RED, redLight);

    TrafficSignal * greenLight = new SemaphoreLight("Green", mediator);
    mediator->registerTrafficSignal(Signal::SEMAPHORE_GREEN, greenLight);

    TrafficSignal * yellowLight = new SemaphoreLight("Yellow", mediator);
    mediator->registerTrafficSignal(Signal::SEMAPHORE_YELLOW, yellowLight);

    TrafficSignal * walkingManLight = new PedestrianControlLight("Red", mediator);
    mediator->registerTrafficSignal(Signal::PEDESTRIAN_RED, walkingManLight);

    TrafficSignal * upraisedHandLight = new PedestrianControlLight("Green", mediator);
    mediator->registerTrafficSignal(Signal::PEDESTRIAN_GREEN, upraisedHandLight);

    std::cout << std::endl;

    // Right after coming in front of the light
    greenLight->turnOn();
    greenLight->notifyGroup();

    yellowLight->turnOn();
    yellowLight->notifyGroup();

    redLight->turnOn();
    redLight->notifyGroup();

    // Pushed button for crosswalk
    walkingManLight->turnOn();
    walkingManLight->notifyGroup();

    // Then, after a few seconds ...
    upraisedHandLight->turnOn();
    upraisedHandLight->notifyGroup();


    delete greenLight;
    delete yellowLight;
    delete redLight;
    delete walkingManLight;
    delete upraisedHandLight;

    delete mediator;

    return 0;

}
