#include "Composite/Multiply.h"

namespace GoF {

    namespace Composite {

        Multiply::Multiply(IOperand * left, IOperand * right)
            : Expression(left, right)
        { }

        double Multiply::calculate()
        {
            return leftOperand->calculate() * rightOperand->calculate();
        }

    }

}
