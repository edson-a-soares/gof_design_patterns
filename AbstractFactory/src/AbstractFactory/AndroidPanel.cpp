#include <iostream>
#include "AbstractFactory/AndroidPanel.h"

namespace GoF {

    namespace AbstractFactory {

        AndroidPanel::AndroidPanel()
        { }

        void AndroidPanel::render()
        {
            std::cout << "AndroidPanel" << std::endl;
        }

    }

}
