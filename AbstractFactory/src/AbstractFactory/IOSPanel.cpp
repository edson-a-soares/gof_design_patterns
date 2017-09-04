#include <iostream>
#include "AbstractFactory/IOSPanel.h"

namespace GoF {

    namespace AbstractFactory {

        IOSPanel::IOSPanel()
        { }

        void IOSPanel::render()
        {
            std::cout << "IOSPanel" << std::endl;
        }

    }

}
