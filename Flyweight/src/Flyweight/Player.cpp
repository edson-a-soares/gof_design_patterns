#include <iostream>
#include "Flyweight/Player.h"

namespace GoF {

    namespace Flyweight {

        Player::Player()
            : AbstractItem('$')
        {
            std::cout << "\nCreating a Player .." << std::endl;
        }

        void Player::display(const Point & point)
        {
            std::cout << "displaying Player (" << symbol << ") at "
                "Y = " << point.getVerticalAxis() <<
                " X = " << point.getVerticalAxis() << std::endl;
        }

    }

}
