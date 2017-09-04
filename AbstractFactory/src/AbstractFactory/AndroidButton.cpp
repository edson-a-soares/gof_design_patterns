#include <iostream>
#include "AbstractFactory/AndroidButton.h"

namespace GoF {

    namespace AbstractFactory {

        AndroidButton::AndroidButton()
        { }

        void AndroidButton::render()
        {
            std::cout << "AndroidButton" << std::endl;
        }

    }

}
