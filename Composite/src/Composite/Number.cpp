#include "Composite/Number.h"

namespace GoF {

    namespace Composite {

        Number::Number(double _number)
            : number(_number)
        { }

        double Number::calculate()
        {
            return number;
        }

    }

}
