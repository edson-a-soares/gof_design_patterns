#include "Decorator/CarDecorator.h"

namespace GoF {

    namespace Decorator {

        CarDecorator::CarDecorator(ICar * _car, double _price, const std::string & _description)
            : car(_car),
              price(_price),
              description(_description)
        { }

        CarDecorator::~CarDecorator()
        {
            delete car;
        }

        double CarDecorator::getPrice()
        {
            return car->getPrice() + price;
        }

        std::string CarDecorator::getDescription()
        {
            return car->getDescription() + description;
        }

    }

}
