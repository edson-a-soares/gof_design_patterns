#include "Decorator/BluetoothDecorator.h"

namespace GoF {

    namespace Decorator {

        BluetoothDecorator::BluetoothDecorator(ICar * car)
            : CarDecorator(car, 150.50, "\n\twith Bluetooth")
        { }

    }

}
