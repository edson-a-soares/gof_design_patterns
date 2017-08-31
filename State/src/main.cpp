#include <iostream>
#include "State/Engine.h"

using GoF::State::Engine;
using GoF::State::Operation;
using GoF::State::StateMachine;

int main(int argc, char * argv[]) {

    double result = 0;
    StateMachine stateMachine;
    Engine engine(stateMachine);

    engine.setOperandRight(75);
    engine.setOperation(Operation::SUM);
    engine.setOperandLeft(25);

    std::cout << "\n( 75 + 25 ) = " << engine.getResult() << std::endl;

    std::cout << "\nReusing previous results for calculation ...\n" << std::endl;

    result = engine.getResult();

    engine.setOperandRight(result);
    engine.setOperation(Operation::SUBTRACT);
    engine.setOperandLeft(50);

    std::cout << "( " << result << " - 50 ) = " << engine.getResult() << std::endl;

    result = engine.getResult();

    engine.setOperandRight(result);
    engine.setOperation(Operation::MULTIPLY);
    engine.setOperandLeft(10);

    std::cout << "( " << result << "  * 10 ) = " << engine.getResult() << std::endl;

    result = engine.getResult();

    engine.setOperandRight(result);
    engine.setOperation(Operation::DIVIDE);
    engine.setOperandLeft(25);

    std::cout << "( " << result << " / 25 ) = " << engine.getResult() << std::endl;

    engine.clear();
    std::cout << "\nEquals: " << engine.getResult() << std::endl;

    return 0;

}
