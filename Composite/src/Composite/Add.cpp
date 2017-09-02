#include "Composite/Add.h"

namespace GoF {

    namespace Composite {

        Add::Add(IOperand * left, IOperand * right)
            : Expression(left, right)
        { }

        double Add::calculate()
        {
            return leftOperand->calculate() + rightOperand->calculate();
        }

    }

}
