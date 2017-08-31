#include "Interpreter/RomanNumberInterpreter.h"

namespace GoF {

    namespace Interpreter {

        RomanNumberInterpreter::RomanNumberInterpreter()
        { }

        void RomanNumberInterpreter::interpret(InterpreterContext & context)
        {

            if ( context.isInterpreted() ) {
                return;
            }

            if ( context.getNextPortion(2) == nine() ) {
                context.update(2, 9 * getMultiplier());
            }

            if ( context.getNextPortion(2) == four() ) {
                context.update(2, 4 * getMultiplier());
            }

            if ( context.getNextPortion(1) == five() ) {
                context.update(1, 5 * getMultiplier());
            }

            while ( context.getNextPortion(1) == one() ) {
                context.update(1, 1 * getMultiplier());
            }

        }

    }

}
