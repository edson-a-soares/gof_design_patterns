#include "Command/Factory/SubtractFactory.h"

namespace GoF {

    namespace Command {

        namespace Factory {

            Command * SubtractFactory::createCommand(double _operand, double _operator)
            {
                return new Subtract(this->createReceiver(_operand, _operator));
            }

            Receiver * SubtractFactory::createReceiver(double _operand, double _operator)
            {
                return new Subtraction(_operand, _operator);
            }

        }

    }

}
