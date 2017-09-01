#include "Mediator/TrafficSignal.h"

namespace GoF {

    namespace Mediator {

        TrafficSignal::TrafficSignal()
            : mediator { },
              lightColor(""),
              lightOn(false)
        { }

        TrafficSignal::TrafficSignal(
            const std::string & _lightColor,
            ITrafficSignalsMediator * _mediator
        )
            : mediator(_mediator),
              lightColor(_lightColor),
              lightOn(false)
        { }

        TrafficSignal::~TrafficSignal()
        { }

        void TrafficSignal::notifyGroup()
        {
            mediator->notifyChange(this);
        }

        bool TrafficSignal::isOn()
        {
            return lightOn;
        }

    }

}
