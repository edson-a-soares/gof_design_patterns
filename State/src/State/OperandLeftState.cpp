#include <iostream>
#include "State/OperandLeftState.h"

namespace GoF {

    namespace State {

        OperandLeftState::OperandLeftState()
        {
            std::cout << "\nOperandLeftState" << std::endl;
        }

        IState & OperandLeftState::getInstance()
        {
            static OperandLeftState instance;
            return instance;
        }

        void OperandLeftState::setOperation(Operation operation)
        {
            AbstractState::setOperation(operation);
            changeState(&OperationState::getInstance());
        }

    }

}
