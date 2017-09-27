#include "State/ResultState.h"

namespace GoF {

    namespace State {

        ResultState::ResultState()
        {
            std::cout << "\nResultState" << std::endl;
        }

        IState & ResultState::getInstance()
        {
            static ResultState instance;
            return instance;
        }

        void ResultState::setOperand(double operand)
        {
            setRightOperand(operand);
            changeState(&OperandRightState::getInstance());
        }

    }

}
