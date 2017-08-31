#include "Command/Function/Multiply.h"

namespace GoF {

    namespace Command {

        namespace Function {

            Multiply::Multiply(Receiver * _performer)
                : performer(_performer)
            { }

            Multiply::~Multiply()
            {
                delete performer;
            }

            void Multiply::execute()
            {
                performer->action();
                result = performer->getResult();
            }

            void Multiply::undo()
            {
                Division antagonist = Division(
                    result,
                    performer->getOperandTwo()
                );
                antagonist.action();
                result = antagonist.getResult();
            }

            double Multiply::getResult()
            {
                return result;
            }

        }

    }

}

