#include <iostream>
#include "AbstractFactory/IOSLabel.h"

namespace GoF {

    namespace AbstractFactory {

        IOSLabel::IOSLabel()
        { }

        void IOSLabel::render()
        {
            std::cout << "IOSLabel" << std::endl;
        }

    }

}
