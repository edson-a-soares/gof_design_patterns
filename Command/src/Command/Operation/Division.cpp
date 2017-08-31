#include "Command/Operation/Division.h"

namespace GoF {

    namespace Command {

        namespace Operation {

            Division::Division(double operandOne, double operandTwo)
                : Receiver(operandOne, operandTwo)
            { }

            void Division::action()
            {
                result = getOperandOne() / getOperandTwo();
            }

        }

    }

}

