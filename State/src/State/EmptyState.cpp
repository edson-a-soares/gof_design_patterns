#include "State/EmptyState.h"

namespace GoF {

    namespace State {

        EmptyState::EmptyState(StateMachine & machine)
            : stateMachine(machine)
        {
            std::cout << "\nEmptyState" << std::endl;
        }

        double EmptyState::getResult()
        {
            return 0;
        }

        void EmptyState::setOperandRight(double operand)
        {
            stateMachine.updateState(State::OPERAND_RIGHT);
            stateMachine.getCurrentState()->setOperandRight(operand);
        }

        void EmptyState::setOperandLeft(double)
        { }

        void EmptyState::setOperation(Operation)
        { }

    }

}
