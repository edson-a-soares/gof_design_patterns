#include "State/ResultState.h"

namespace GoF {

    namespace State {

        ResultState::ResultState(StateMachine & _stateMachine)
            : stateMachine(_stateMachine),
              calculationHandler { }
        {
            std::cout << "\n -> ResultState" << std::endl;
        }

        double ResultState::getResult()
        {
            return calculationHandler.compute(operandRightValue, operation, operandLeftValue);
        }

        void ResultState::setOperandRight(double operand)
        {
            operandRightValue = operand;
        }

        void ResultState::setOperandLeft(double operand)
        {
            operandLeftValue = operand;
        }

        void ResultState::setOperation(Operation option)
        {
            operation = option;
        }

    }

}
