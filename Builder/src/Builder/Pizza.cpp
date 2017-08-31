#include "Builder/Pizza.h"

namespace GoF {

    namespace Builder {

        Pizza::Pizza(const std::string & _name, const std::string & identifier)
            : cost(0),
              name(_name),
              code(identifier)
        { }

        float Pizza::getCost()
        {
            return cost;
        }

        void Pizza::addCost(int value)
        {
            cost += value;
        }

        std::string Pizza::getCode() const
        {
            return code;
        }

        std::string Pizza::getName() const
        {
            return name;
        }

        void Pizza::setSize(Size _size)
        {
            addCost(_size);
            size = _size;
        }

        void Pizza::setTopping(Topping _topping)
        {
            addCost(_topping);
            topping = _topping;
        }

        void Pizza::setStuffedCrust(StuffedCrust _crust)
        {
            addCost(_crust);
            crust = _crust;
        }

    }

}
