#include "Command/Function/Sum.h"

namespace GoF {

    namespace Command {

        namespace Function {

            Sum::Sum(Receiver * _performer)
                : performer(_performer)
            { }

            Sum::~Sum()
            {
                delete performer;
            }

            void Sum::execute()
            {
                performer->action();
                result = performer->getResult();
            }

            void Sum::undo()
            {
                Subtraction antagonist = Subtraction(
                    performer->getResult(),
                    performer->getOperandTwo()
                );
                antagonist.action();
                result = antagonist.getResult();
            }

            double Sum::getResult()
            {
                return result;
            }

        }

    }

}

