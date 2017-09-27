#include <iostream>
#include "Strategy/MOVStrategy.h"

namespace GoF {

    namespace Strategy {

        MOVStrategy::MOVStrategy()
        { }

        void MOVStrategy::execute()
        {
            std::cout << "using the MOV Strategy..." << std::endl;
        }

    }

}
