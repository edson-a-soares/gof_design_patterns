#include "Composite/Subtract.h"

namespace GoF {

    namespace Composite {

        Subtract::Subtract(IOperand * left, IOperand * right)
            : Expression(left, right)
        { }

        double Subtract::calculate()
        {
            return leftOperand->calculate() - rightOperand->calculate();
        }

    }

}
