#include "Command/Factory/MultiplyFactory.h"

namespace GoF {

    namespace Command {

        namespace Factory {

            Command * MultiplyFactory::createCommand(double _operand, double _operator)
            {
                return new Multiply(this->createReceiver(_operand, _operator));
            }

            Receiver * MultiplyFactory::createReceiver(double _operand, double _operator)
            {
                return new Multiplication(_operand, _operator);
            }

        }

    }

}
