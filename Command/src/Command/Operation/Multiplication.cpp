#include "Command/Operation/Multiplication.h"

namespace GoF {

    namespace Command {

        namespace Operation {

            Multiplication::Multiplication(double operandOne, double operandTwo)
                : Receiver(operandOne, operandTwo)
            { }

            void Multiplication::action()
            {
                result = getOperandOne() * getOperandTwo();
            }

        }

    }

}

