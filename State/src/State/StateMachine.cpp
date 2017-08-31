#include "State/StateMachine.h"

namespace GoF {

    namespace State {

        StateMachine::StateMachine()
        {
            currentState = new EmptyState(*this);
        }

        StateMachine::~StateMachine()
        {
            delete currentState;
        }

        void StateMachine::updateState(State state)
        {

            IState * nextState = nullptr;
            switch (state) {

                case EMPTY:
                    nextState = new EmptyState(*this);
                    break;

                case RESULT:
                    nextState = new ResultState(*this);
                    break;

                case OPERATION:
                    nextState = new OperationState(*this);
                    break;

                case OPERAND_LEFT:
                    nextState = new OperandLeftState(*this);
                    break;

                case OPERAND_RIGHT:
                    nextState = new OperandRightState(*this);
                    break;

                default:
                    std::cout << "Error." << std::endl;
                    exit(1);

            }

            delete currentState;
            currentState = nextState;

        }

        IState * StateMachine::getCurrentState()
        {
            return currentState;
        }

    }

}
