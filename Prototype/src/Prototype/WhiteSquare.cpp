#include <iostream>
#include "Prototype/WhiteSquare.h"

namespace GoF {

    namespace Prototype {

        WhiteSquare::WhiteSquare()
        { }

        void WhiteSquare::print()
        {
            std::cout << "    ";
        }

        ISquare * WhiteSquare::clone()
        {
            return new WhiteSquare(*this);
        }

    }

}
