#include "gtest/gtest.h"
#include "Builder/Pizza.h"

using GoF::Builder::Size;
using GoF::Builder::Topping;
using GoF::Builder::StuffedCrust;

TEST(PizzaTestCase, PizzaRightCost) {

    GoF::Builder::Pizza pizza = GoF::Builder::Pizza("Fake Pizza", "123456789");

    pizza.setSize(Size::LARGE);
    pizza.setTopping(Topping::DOUBLE_CHEESE);
    pizza.setStuffedCrust(StuffedCrust::CREAM_CHEESE);

    ASSERT_EQ(
        (Size::LARGE + Topping::DOUBLE_CHEESE + StuffedCrust::CREAM_CHEESE),
        pizza.getCost()
    );

}
