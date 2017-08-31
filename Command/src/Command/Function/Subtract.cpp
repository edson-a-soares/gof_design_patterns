#include "Command/Function/Subtract.h"

namespace GoF {

    namespace Command {

        namespace Function {

            Subtract::Subtract(Receiver * _performer)
                : performer(_performer)
            { }

            Subtract::~Subtract()
            {
                delete performer;
            }

            void Subtract::execute()
            {
                performer->action();
                result = performer->getResult();
            }

            void Subtract::undo()
            {
                Addition antagonist = Addition(
                    result,
                    performer->getOperandTwo()
                );
                antagonist.action();
                result = antagonist.getResult();
            }

            double Subtract::getResult()
            {
                return result;
            }

        }

    }

}
