#include "State/Engine.h"

namespace GoF {

    namespace State {

        Engine::Engine(StateMachine & _stateMachine)
            : stateMachine(_stateMachine)
        { }

        void Engine::clear()
        {
            stateMachine.updateState(State::EMPTY);
        }

        double Engine::getResult()
        {
            return stateMachine.getCurrentState()->getResult();
        }

        void Engine::setOperandRight(double number)
        {
            stateMachine.getCurrentState()->setOperandRight(number);
        }

        void Engine::setOperandLeft(double number)
        {
            stateMachine.getCurrentState()->setOperandLeft(number);
        }

        void Engine::setOperation(Operation operation)
        {
            stateMachine.getCurrentState()->setOperation(operation);
        }

    }

}
