#include <iostream>
#include "Prototype/BlackSquare.h"

namespace GoF {

    namespace Prototype {

        BlackSquare::BlackSquare()
        { }

        void BlackSquare::print()
        {
            std::cout << "@@@@";
        }

        ISquare * BlackSquare::clone()
        {
            return new BlackSquare(*this);
        }

    }

}
