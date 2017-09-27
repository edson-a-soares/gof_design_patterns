#include "State/OperandRightState.h"

namespace GoF {

    namespace State {

        OperandRightState::OperandRightState()
        {
            std::cout << "\nOperandRightState" << std::endl;
        }

        IState & OperandRightState::getInstance()
        {
            static OperandRightState instance;
            return instance;
        }

        double OperandRightState::getResult()
        {
            changeState(&ResultState::getInstance());
            double result = AbstractState::getResult();
            AbstractState::setOperation(nextOperation);

            setLeftOperand(result);
            return result;
        }

        void OperandRightState::setOperation(Operation operation)
        {
            nextOperation = operation;
        }

    }

}
