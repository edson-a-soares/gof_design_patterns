#include "Flyweight/Point.h"

namespace GoF {

    namespace Flyweight {

        Point::Point()
            : verticalAxis(0),
              horizontalAxis(0)
        { }

        Point::Point(const int xAxis, const int yAxis)
            : verticalAxis(yAxis),
              horizontalAxis(xAxis)

        { }

        int Point::getVerticalAxis() const
        {
            return verticalAxis;
        }

        int Point::getHorizontalAxis() const
        {
            return horizontalAxis;
        }

    }

}
