#include <iostream>
#include "Flyweight/LandMine.h"

namespace GoF {

    namespace Flyweight {

        LandMine::LandMine()
            : AbstractItem('@')
        {
            std::cout << "\nCreating a LandMine .." << std::endl;
        }

        void LandMine::display(const Point & point)
        {
            std::cout << "displaying LandMine (" << symbol << ") at "
                "Y = " << point.getVerticalAxis() <<
                " X = " << point.getHorizontalAxis() << std::endl;

        }

    }

}
