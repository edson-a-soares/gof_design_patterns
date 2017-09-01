#include "Decorator/SmartDriveAssitantDecorator.h"

namespace GoF {

    namespace Decorator {

        SmartDriveAssistantDecorator::SmartDriveAssistantDecorator(ICar * car)
            : CarDecorator(car, 600.75, "\n\twith Smart Drive Assistant")
        { }

    }

}
