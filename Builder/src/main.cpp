#include "Builder/Size.h"
#include "Builder/Order.h"
#include "Builder/Topping.h"
#include "Builder/StuffedCrust.h"
#include "Builder/PizzaBuilder.h"

using GoF::Builder::Size;
using GoF::Builder::Topping;
using GoF::Builder::StuffedCrust;

int main(int argc, char * argv[]) {

    GoF::Builder::Order order = GoF::Builder::Order();

    GoF::Builder::PizzaBuilder fourCheese = GoF::Builder::PizzaBuilder(
        "Four Cheese Pizza", "965784321"
    );

    fourCheese.size(Size::LARGE)
        .topping(Topping::DOUBLE_CHEESE)
        .stuffedCrust(StuffedCrust::CREAM_CHEESE);

    GoF::Builder::PizzaBuilder gourmet = GoF::Builder::PizzaBuilder(
        "Gourmet Pizza    ", "267784320"
    );

    gourmet.size(Size::FAMILY)
        .topping(Topping::GOURMET)
        .stuffedCrust(StuffedCrust::CHEDDAR);

    GoF::Builder::PizzaBuilder margherita = GoF::Builder::PizzaBuilder(
        "Margherita Pizza ", "016584398"
    );

    margherita.size(Size::MEDIUM)
        .topping(Topping::MARGHERITA)
        .stuffedCrust(StuffedCrust::RANCH);

    order.addItem(gourmet.build());
    order.addItem(margherita.build());
    order.addItem(fourCheese.build());

    order.calculateValue();
    order.print();

    return 0;

}
