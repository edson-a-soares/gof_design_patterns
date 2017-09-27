#include "State/EmptyState.h"

namespace GoF {

    namespace State {

        EmptyState::EmptyState()
        {
            std::cout << "\nEmptyState" << std::endl;
        }

        IState & EmptyState::getInstance()
        {
            static EmptyState instance;
            return instance;
        }

        double EmptyState::getResult()
        {
            setLeftOperand(0);
            setRightOperand(0);
            return AbstractState::getResult();
        }

        void EmptyState::setOperand(double operand)
        {
            setLeftOperand(operand);
            changeState(&OperandLeftState::getInstance());
        }

    }

}
