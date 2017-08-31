#include <iostream>
#include "Command/Action.h"
#include "Command/Calculator.h"

using GoF::Command::Action;
using GoF::Command::Invoker;
using GoF::Command::Calculator;
using GoF::Command::Factory::CalculatorCommandFactory;

int main(int argc, char * argv[]) {

    Invoker invoker;
    CalculatorCommandFactory factory;
    Calculator calculator = Calculator(factory, invoker);

    std::cout << "\nPerforming basic operations:" << std::endl;

    std::cout << "\n( 150 + 25 ): ";
    calculator.calculate(150, 25, Action::SUM);
    std::cout << calculator.getResult() << std::endl;

    std::cout << "\n( " << calculator.getResult() << " - 75 ) = ";
    calculator.calculate(calculator.getResult(), 75, Action::SUBTRACT);
    std::cout << "" << calculator.getResult() << std::endl;

    std::cout << "\n( " << calculator.getResult() << " *  5 ) = ";
    calculator.calculate(calculator.getResult(), 5, Action::MULTIPLY);
    std::cout << calculator.getResult() << std::endl;

    std::cout << "\n( " << calculator.getResult() << " / 25 ) = ";
    calculator.calculate(calculator.getResult(), 25, Action::DIVIDE);
    std::cout << calculator.getResult() << std::endl;


    std::cout << "\nPerforming undo operations:" << std::endl;

    calculator.undo();
    std::cout << "\nUndo: " << calculator.getResult() << std::endl;

    calculator.undo();
    std::cout << "Undo: " << calculator.getResult() << std::endl;

    calculator.undo();
    std::cout << "Undo: " << calculator.getResult() << std::endl;


    std::cout << "\nPerforming redo operations:" << std::endl;

    calculator.redo();
    std::cout << "\nRedo: " << calculator.getResult() << std::endl;

    calculator.redo();
    std::cout << "Redo: " << calculator.getResult() << std::endl;

    calculator.redo();
    std::cout << "Redo: " << calculator.getResult() << std::endl;

    return 0;

}
