#include <iostream>
#include "State/Engine.h"

using GoF::State::Engine;
using GoF::State::Operation;
using GoF::State::StateContext;

int main(int argc, char * argv[]) {

    StateContext stateContext;
    Engine engine(stateContext);

    engine.setOperand(75);
    engine.setOperation(Operation::SUM);
    engine.setOperand(25);

    std::cout << "\n( 75 + 25 ) = " << engine.getResult() << std::endl;

    std::cout << "\nReusing previous results for next calculations ...\n" << std::endl;

    // Note.: The last result is automatically set as the left operand of
    // the next operation. Only the operation, and left operand should be inserted.
    engine.setOperation(Operation::SUBTRACT);
    engine.setOperand(50);

    std::cout << "( 100 - 50 ) = " << engine.getResult() << std::endl;

    engine.setOperation(Operation::MULTIPLY);
    engine.setOperand(10);

    std::cout << "( 50  * 10 ) = " << engine.getResult() << std::endl;

    engine.setOperation(Operation::DIVIDE);
    engine.setOperand(25);

    std::cout << "( 500 / 25 ) = " << engine.getResult() << std::endl;

    std::cout << "\nClearing all data .. " << std::endl;
    engine.clear();

    std::cout << "Equals: " << engine.getResult() << std::endl;

    return 0;

}
