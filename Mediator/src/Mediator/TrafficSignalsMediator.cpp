#include <iostream>
#include "Mediator/TrafficSignalsMediator.h"

namespace GoF {

    namespace Mediator {

        TrafficSignalsMediator::TrafficSignalsMediator()
            : trafficSignals { }
        { }

        TrafficSignalsMediator::~TrafficSignalsMediator()
        {
            trafficSignals.erase(trafficSignals.begin(), trafficSignals.end());
            trafficSignals.clear();
        }

        void TrafficSignalsMediator::registerTrafficSignal(Signal symbol, ITrafficSignal * signal)
        {
            trafficSignals[symbol] = signal;
        }

        void TrafficSignalsMediator::smartToggle(ITrafficSignal * source, ITrafficSignal * target)
        {

            for ( auto & light : trafficSignals ) {

                if ( light.second == source ) {
                    continue;
                }

                if ( light.second == target ) {
                    match(source, target);
                    continue;
                }

                if ( source->isOn() ) {
                    light.second->turnOff();
                } else {
                    light.second->turnOn();
                }

            }

        }

        void TrafficSignalsMediator::match(ITrafficSignal * source, ITrafficSignal * target)
        {
            if ( source->isOn() ) {
                target->turnOn();
            } else {
                target->turnOff();
            }
        }

        void TrafficSignalsMediator::notifyChange(ITrafficSignal * sender)
        {

            if ( sender == trafficSignals[ Signal::SEMAPHORE_RED ] ) {
                smartToggle(sender, trafficSignals[Signal::PEDESTRIAN_GREEN]);
            }

            if ( sender == trafficSignals[ Signal::SEMAPHORE_YELLOW ] ) {
                smartToggle(sender, trafficSignals[Signal::PEDESTRIAN_RED]);
            }

            if ( sender == trafficSignals[ Signal::SEMAPHORE_GREEN ] ) {
                smartToggle(sender, trafficSignals[Signal::PEDESTRIAN_RED]);
            }

            if ( sender == trafficSignals[ Signal::PEDESTRIAN_GREEN ] ) {
                smartToggle(sender, trafficSignals[Signal::SEMAPHORE_RED]);
            }

            if ( sender == trafficSignals[ Signal::PEDESTRIAN_RED ] ) {
                smartToggle(sender, trafficSignals[Signal::SEMAPHORE_GREEN]);
            }

            std::cout << std::endl;

        }

    }

}
