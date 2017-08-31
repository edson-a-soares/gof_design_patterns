#include "Command/Calculator.h"

namespace GoF {

    namespace Command {

        Calculator::Calculator(CalculatorCommandFactory & _factory, Invoker & _invoker)
            : invoker (_invoker),
              commandFactory(_factory)
        { }

        void Calculator::redo()
        {
            invoker.redoAction();
        }

        void Calculator::undo()
        {
            invoker.undoAction();
        }

        double Calculator::getResult()
        {
            return invoker.getActionResult();
        }

        void Calculator::calculate(double operandOne, double operandTwo, Action operation)
        {
            Command * action = commandFactory.createFactory(operation)->createCommand(operandOne, operandTwo);
            invoker.run(action);
        }

    }

}
