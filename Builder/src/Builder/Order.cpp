#include <iostream>
#include "Builder/Order.h"

namespace GoF {

    namespace Builder {

        Order::Order() :
            cost(0)
        { }

        Order::~Order()
        {
            items.erase(items.begin(), items.end());
            items.clear();
        }

        void Order::addItem(IOrderable * item)
        {
            items.insert(item);
        }

        float Order::getCost()
        {
            return cost;
        }

        void Order::calculateValue()
        {
            for ( auto item : items ) {
                cost += item->getCost();
            }
        }

        void Order::print()
        {
            std::cout << "\n##############################################" << std::endl;
            std::cout << "############  Purchase Order #################" << std::endl;
            std::cout << "##############################################" << std::endl;
            std::cout << "Code      | WhiteSquare name           | Cost        " << std::endl;

            for ( auto item : items ) {
                std::cout << item->getCode() << "   " << item->getName() << "     $" << item->getCost() << std::endl;
            }

            std::cout << "\n                           Total price: $" << getCost() << std::endl;
        }

    }

}
