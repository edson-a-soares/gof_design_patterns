#include <iostream>
#include "State/CalculationHandler.h"

namespace GoF {

    namespace State {

        CalculationHandler::CalculationHandler()
        { }

        double CalculationHandler::compute(double operandRight, Operation operationOption, double operandLeft)
        {

            double result = 0;
            switch ( operationOption ) {

                case SUM:
                    result = operandRight + operandLeft;
                    break;

                case SUBTRACT:
                    result = operandRight - operandLeft;
                    break;

                case MULTIPLY:
                    result = operandRight * operandLeft;
                    break;

                case DIVIDE:
                    result = operandRight / operandLeft;
                    break;

                default:
                    std::cout << "Operation not supported." << std::endl;
                    exit(1);

            }

            return result;

        }

    }

}
