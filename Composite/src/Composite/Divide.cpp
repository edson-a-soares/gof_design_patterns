#include "Composite/Divide.h"

namespace GoF {

    namespace Composite {

        Divide::Divide(IOperand * left, IOperand * right)
            : Expression(left, right)
        { }

        double Divide::calculate()
        {
            return leftOperand->calculate() / rightOperand->calculate();
        }

    }

}
