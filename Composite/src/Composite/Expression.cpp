#include "Composite/Expression.h"

namespace GoF {

    namespace Composite {

        Expression::Expression(IOperand * left, IOperand * right)
            : leftOperand(left),
              rightOperand(right)
        { }

        Expression::~Expression()
        {
            delete leftOperand;
            delete rightOperand;
        }

    }

}
