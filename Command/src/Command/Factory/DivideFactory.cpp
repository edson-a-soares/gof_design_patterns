#include "Command/Factory/DivideFactory.h"

namespace GoF {

    namespace Command {

        namespace Factory {

            Command * DivideFactory::createCommand(double _operand, double _operator)
            {
                return new Divide(this->createReceiver(_operand, _operator));
            }

            Receiver * DivideFactory::createReceiver(double _operand, double _operator)
            {
                return new Division(_operand, _operator);
            }

        }

    }

}
