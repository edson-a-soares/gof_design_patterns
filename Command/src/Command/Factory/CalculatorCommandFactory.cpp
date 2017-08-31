#include "Command/Factory/CalculatorCommandFactory.h"

namespace GoF {

    namespace Command {

        namespace Factory {

            CommandFactory * CalculatorCommandFactory::createFactory(Action action)
            {

                CommandFactory * factory = nullptr;
                switch (action) {

                    case SUM:
                        factory = new SumFactory();
                        break;

                    case SUBTRACT:
                        factory = new SubtractFactory();
                        break;

                    case MULTIPLY:
                        factory = new MultiplyFactory();
                        break;

                    case DIVIDE:
                        factory = new DivideFactory();
                        break;

                }

                return factory;

            }

        }

    }

}
