#include "State/OperationState.h"

namespace GoF {

    namespace State {

        OperationState::OperationState()
        {
            std::cout << "\nOperationState" << std::endl;
        }

        IState & OperationState::getInstance()
        {
            static OperationState instance;
            return instance;
        }

        void OperationState::setOperand(double operand)
        {
            setRightOperand(operand);
            changeState(&OperandRightState::getInstance());
        }

    }

}
