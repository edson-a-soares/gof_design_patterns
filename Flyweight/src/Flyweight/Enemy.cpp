#include <iostream>
#include "Flyweight/Enemy.h"

namespace GoF {

    namespace Flyweight {

        Enemy::Enemy(const char symbol)
            : AbstractItem(symbol)
        {
            std::cout << "\nCreating an Enemy .." << std::endl;
        }

        void Enemy::display(const Point & point)
        {
            std::cout << "displaying Enemy (" << symbol << ") at "
                "Y = " << point.getVerticalAxis() <<
                " X = " << point.getHorizontalAxis() << std::endl;
        }

    }

}
