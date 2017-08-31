#include "Command/Receiver.h"

namespace GoF {

    namespace Command {

        Receiver::Receiver(double _operandOne, double _operandTwo)
            : result(0),
              operandOne(_operandOne),
              operandTwo(_operandTwo)
        { }

        double Receiver::getResult()
        {
            return this->result;
        }

        double Receiver::getOperandOne()
        {
            return this->operandOne;
        }

        double Receiver::getOperandTwo()
        {
            return this->operandTwo;
        }

    }

}
