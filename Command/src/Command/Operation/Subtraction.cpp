#include "Command/Operation/Subtraction.h"

namespace GoF {

    namespace Command {

        namespace Operation {

            Subtraction::Subtraction(double operandOne, double operandTwo)
                : Receiver(operandOne, operandTwo)
            { }

            void Subtraction::action()
            {
                result = getOperandOne() - getOperandTwo();
            }

        }

    }

}
