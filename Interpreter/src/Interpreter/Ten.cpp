#include "Interpreter/Ten.h"

namespace GoF {

    namespace Interpreter {

        Ten::Ten()
        { }

        std::string Ten::one() const
        {
            return "X";
        }

        std::string Ten::four() const
        {
            return "XL";
        }

        std::string Ten::five() const
        {
            return "L";
        }

        std::string Ten::nine() const
        {
            return "XC";
        }

        int Ten::getMultiplier() const
        {
            return 10;
        }

    }

}
