#include "State/AbstractState.h"
#include "State/StateContext.h"

namespace GoF {

    namespace State {

        AbstractState::AbstractState()
            : stateContext { },
              calculationHandler { }
        { }

        double AbstractState::getResult()
        {
            return calculationHandler.compute(
                stateContext->leftOperand,
                stateContext->operation,
                stateContext->rightOperand
            );
        }

        void AbstractState::setOperation(Operation operation)
        {
            stateContext->operation = operation;
        }

        void AbstractState::setOperand(double)
        { }

        void AbstractState::changeState(IState * state)
        {
            stateContext->changeState(state);
        }

        void AbstractState::setContext(StateContext * context)
        {
            stateContext = context;
        }

        //
        // friend class management
        //

        void AbstractState::setLeftOperand(double operand)
        {
            stateContext->leftOperand = operand;
        }

        void AbstractState::setRightOperand(double operand)
        {
            stateContext->rightOperand = operand;
        }

    }

}
