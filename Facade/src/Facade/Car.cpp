#include "Facade/Car.h"

namespace GoF {

    namespace Facade {

        Car::Car()
            : price(0.0),
              model("")
        { }

        Car::Car(double _price, const std::string & _model)
            : price(_price),
              model(_model)
        { }

        double Car::getPrice() const
        {
            return price;
        }

        std::string Car::getModel() const
        {
            return model;
        }

    }

}
