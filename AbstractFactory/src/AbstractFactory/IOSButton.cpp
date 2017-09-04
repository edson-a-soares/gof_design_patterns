#include <iostream>
#include "AbstractFactory/IOSButton.h"

namespace GoF {

    namespace AbstractFactory {

        IOSButton::IOSButton()
        { }

        void IOSButton::render()
        {
            std::cout << "IOSButton" << std::endl;
        }

    }

}
