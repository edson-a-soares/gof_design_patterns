#include <iostream>
#include "AbstractFactory/AndroidLabel.h"

namespace GoF {

    namespace AbstractFactory {

        AndroidLabel::AndroidLabel()
        { }

        void AndroidLabel::render()
        {
            std::cout << "AndroidLabel" << std::endl;
        }

    }

}
