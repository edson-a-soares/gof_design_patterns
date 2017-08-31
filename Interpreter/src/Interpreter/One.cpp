#include "Interpreter/One.h"

namespace GoF {

    namespace Interpreter {

        One::One()
        { }

        std::string One::one() const
        {
            return "I";
        }

        std::string One::four() const
        {
            return "IV";
        }

        std::string One::five() const
        {
            return "V";
        }

        std::string One::nine() const
        {
            return "IX";
        }

        int One::getMultiplier() const
        {
            return 1;
        }

    }

}
