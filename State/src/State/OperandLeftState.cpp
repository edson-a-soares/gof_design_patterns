#include <iostream>
#include "State/OperandLeftState.h"

namespace GoF {

    namespace State {

        OperandLeftState::OperandLeftState(StateMachine & _stateMachine)
            : stateMachine(_stateMachine)
        {
            std::cout << "\n -> OperandLeftState" << std::endl;
        }

        double OperandLeftState::getResult()
        {
            stateMachine.updateState(State::RESULT);
            stateMachine.getCurrentState()->setOperation(operation);
            stateMachine.getCurrentState()->setOperandLeft(operandLeftValue);
            stateMachine.getCurrentState()->setOperandRight(operandRightValue);
            return stateMachine.getCurrentState()->getResult();
        }

        void OperandLeftState::setOperandRight(double operand)
        {
            operandRightValue = operand;
        }

        void OperandLeftState::setOperandLeft(double operand)
        {
            operandLeftValue = operand;
        }

        void OperandLeftState::setOperation(Operation _operation)
        {
            operation = _operation;
        }

    }

}
