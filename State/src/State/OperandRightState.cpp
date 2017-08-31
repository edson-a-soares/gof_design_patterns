#include "State/OperandRightState.h"

namespace GoF {

    namespace State {

        OperandRightState::OperandRightState(StateMachine & _stateMachine)
            : stateMachine(_stateMachine)
        {
            std::cout << "\n -> OperandRightState" << std::endl;
        }

        double OperandRightState::getResult()
        {
            return operandValue;
        }

        void OperandRightState::setOperandRight(double operand)
        {
            operandValue = operand;
        }

        void OperandRightState::setOperandLeft(double)
        { }

        void OperandRightState::setOperation(Operation operation)
        {
            stateMachine.updateState(State::OPERATION);
            stateMachine.getCurrentState()->setOperation(operation);
            stateMachine.getCurrentState()->setOperandRight(operandValue);
        }

    }

}
