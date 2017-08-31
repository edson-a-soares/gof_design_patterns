#include "State/OperationState.h"

namespace GoF {

    namespace State {

        OperationState::OperationState(StateMachine & _stateMachine)
            : stateMachine(_stateMachine)
        {
            std::cout << "\n -> OperationState"  << std::endl;
        }

        double OperationState::getResult()
        {
            return operandRightValue;
        }

        void OperationState::setOperandRight(double operand)
        {
            operandRightValue = operand;
        }

        void OperationState::setOperandLeft(double operand)
        {
            stateMachine.updateState(State::OPERAND_LEFT);
            stateMachine.getCurrentState()->setOperation(operation);
            stateMachine.getCurrentState()->setOperandLeft(operand);
            stateMachine.getCurrentState()->setOperandRight(operandRightValue);
        }

        void OperationState::setOperation(Operation _operation)
        {
            operation = _operation;
        }

    }

}
