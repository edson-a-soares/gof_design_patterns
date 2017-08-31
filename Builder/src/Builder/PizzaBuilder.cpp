#include "Builder/PizzaBuilder.h"

namespace GoF {

    namespace Builder {

        PizzaBuilder::PizzaBuilder(const std::string & name, const std::string & identifier)
            : pizza(name, identifier)
        { }

        PizzaBuilder & PizzaBuilder::size(Size size)
        {
            pizza.setSize(size);
            return *this;
        }

        PizzaBuilder & PizzaBuilder::topping(Topping topping)
        {
            pizza.setTopping(topping);
            return *this;
        }

        PizzaBuilder & PizzaBuilder::stuffedCrust(StuffedCrust crust)
        {
            pizza.setStuffedCrust(crust);
            return *this;
        }

        Pizza * PizzaBuilder::build()
        {
            return &pizza;
        }

    }

}
