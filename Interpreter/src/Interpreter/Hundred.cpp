#include "Interpreter/Hundred.h"

namespace GoF {

    namespace Interpreter {

        Hundred::Hundred()
        { }

        std::string Hundred::one() const
        {
            return "C";
        }

        std::string Hundred::four() const
        {
            return "CD";
        }

        std::string Hundred::five() const
        {
            return "D";
        }

        std::string Hundred::nine() const
        {
            return "CM";
        }

        int Hundred::getMultiplier() const
        {
            return 100;
        }

    }

}
