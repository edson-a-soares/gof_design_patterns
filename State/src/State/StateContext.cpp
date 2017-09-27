#include "State/StateContext.h"

namespace GoF {

    namespace State {

        StateContext::StateContext()
            : leftOperand(0),
              rightOperand(0),
              currentState { }
        {
            changeState(&EmptyState::getInstance());
        }

        StateContext::~StateContext()
        { }

        void StateContext::clear()
        {
            changeState(&EmptyState::getInstance());
        }

        IState * StateContext::getCurrentState()
        {
            return currentState;
        }

        void StateContext::changeState(IState * nextState)
        {
            nextState->setContext(this);
            currentState = nextState;
        }

    }

}
