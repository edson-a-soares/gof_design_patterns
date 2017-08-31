#include "Command/Factory/SumFactory.h"

namespace GoF {

    namespace Command {

        namespace Factory {

            Command * SumFactory::createCommand(double _operand, double _operator)
            {
                return new Sum(this->createReceiver(_operand, _operator));
            }

            Receiver * SumFactory::createReceiver(double _operand, double _operator)
            {
                return new Addition(_operand, _operator);
            }

        }

    }

}
