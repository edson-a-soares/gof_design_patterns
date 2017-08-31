#include "Command/Function/Divide.h"

namespace GoF {

    namespace Command {

        namespace Function {

            Divide::Divide(Receiver * _performer)
                : performer(_performer)
            { }

            Divide::~Divide()
            {
                delete performer;
            }

            void Divide::execute()
            {
                performer->action();
                result = performer->getResult();
            }

            void Divide::undo()
            {
                Multiplication antagonist = Multiplication(
                    result,
                    performer->getOperandTwo()
                );
                antagonist.action();
                result = antagonist.getResult();
            }

            double Divide::getResult()
            {
                return result;
            }

        }

    }

}

