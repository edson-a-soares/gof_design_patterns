#include "Decorator/SimpleCar.h"

namespace GoF {

    namespace Decorator {

        SimpleCar::SimpleCar()
            : price(0.0),
              description("")
        { }

        SimpleCar::SimpleCar(double _price, const std::string & _description)
            : price(_price),
              description(_description)
        { }

        double SimpleCar::getPrice()
        {
            return price;
        }

        std::string SimpleCar::getDescription()
        {
            return description;
        }

    }

}
