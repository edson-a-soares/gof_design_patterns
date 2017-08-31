#include "gtest/gtest.h"
#include "Builder/Order.h"
#include "Builder/Pizza.h"

using GoF::Builder::Size;
using GoF::Builder::Topping;
using GoF::Builder::StuffedCrust;

TEST(OrderTestCase, OrderRightCost) {

    GoF::Builder::Pizza pizzaCheese = GoF::Builder::Pizza("Cheese Pizza", "123456789");
        pizzaCheese.setSize(Size::MEDIUM);
        pizzaCheese.setTopping(Topping::DOUBLE_CHEESE);
        pizzaCheese.setStuffedCrust(StuffedCrust::CREAM_CHEESE);

    GoF::Builder::Pizza pizzaMargherita = GoF::Builder::Pizza("Margherita Pizza", "123456789");
        pizzaMargherita.setSize(Size::EXTRA_LARGE);
        pizzaMargherita.setTopping(Topping::MARGHERITA);
        pizzaMargherita.setStuffedCrust(StuffedCrust::SWISS_CHEESE);

    GoF::Builder::Pizza pizzaGourmet = GoF::Builder::Pizza("Gourmet Pizza", "123456789");
        pizzaGourmet.setSize(Size::FAMILY);
        pizzaGourmet.setTopping(Topping::GOURMET);
        pizzaGourmet.setStuffedCrust(StuffedCrust::SWISS_CHEESE);

    GoF::Builder::Order order = GoF::Builder::Order();

    order.addItem(&pizzaCheese);
    order.addItem(&pizzaGourmet);
    order.addItem(&pizzaMargherita);

    order.calculateValue();
    ASSERT_EQ(
        (pizzaCheese.getCost() + pizzaGourmet.getCost() + pizzaMargherita.getCost()),
        order.getCost()
    );

}
