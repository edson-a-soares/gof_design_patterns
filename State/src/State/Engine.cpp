#include "State/Engine.h"

namespace GoF {

    namespace State {

        Engine::Engine(StateContext & _stateMachine)
            : stateContext(_stateMachine)
        { }

        void Engine::clear()
        {
            stateContext.clear();
        }

        double Engine::getResult()
        {
            return stateContext.getCurrentState()->getResult();
        }

        void Engine::setOperand(double operand)
        {
            stateContext.getCurrentState()->setOperand(operand);
        }

        void Engine::setOperation(Operation operation)
        {
            stateContext.getCurrentState()->setOperation(operation);
        }

    }

}
