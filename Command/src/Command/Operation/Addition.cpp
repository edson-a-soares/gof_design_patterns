#include "Command/Operation/Addition.h"

namespace GoF {

    namespace Command {

        namespace Operation {

            Addition::Addition(double operandOne, double operandTwo)
                : Receiver(operandOne, operandTwo)
            { }

            void Addition::action()
            {
                result = getOperandOne() + getOperandTwo();
            }

        }

    }

}
