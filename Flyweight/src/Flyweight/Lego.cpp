#include <iostream>
#include "Flyweight/Lego.h"

namespace GoF {

    namespace Flyweight {

        Lego::Lego()
            : AbstractItem('#')
        {
            std::cout << "\nCreating a Lego .." << std::endl;
        }

        void Lego::display(const Point & point)
        {
            std::cout << "displaying Lego (" << symbol << ") at "
                "Y = " << point.getVerticalAxis() <<
                " X = " << point.getHorizontalAxis() << std::endl;
        }

    }

}
