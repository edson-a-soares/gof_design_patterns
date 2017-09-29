#include <iostream>
#include "Facade/PaymentService.h"

namespace GoF {

    namespace Facade {

        PaymentService::PaymentService()
        { }

        void PaymentService::pay(double price, const std::string & product)
        {
            std::cout << "Product: " << product << std::endl;
            std::cout << "Price: $" << price << std::endl;
        }

    }

}
