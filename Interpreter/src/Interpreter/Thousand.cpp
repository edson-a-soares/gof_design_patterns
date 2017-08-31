#include "Interpreter/Thousand.h"

namespace GoF {

    namespace Interpreter {

        Thousand::Thousand()
        { }

        std::string Thousand::one() const
        {
            return "M";
        }

        std::string Thousand::four() const
        {
            return "";
        }

        std::string Thousand::five() const
        {
            return "";
        }

        std::string Thousand::nine() const
        {
            return "";
        }

        int Thousand::getMultiplier() const
        {
            return 1000;
        }

    }

}
