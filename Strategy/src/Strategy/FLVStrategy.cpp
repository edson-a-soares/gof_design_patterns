#include <iostream>
#include "Strategy/FLVStrategy.h"

namespace GoF {

    namespace Strategy {

        FLVStrategy::FLVStrategy()
        { }

        void FLVStrategy::execute()
        {
            std::cout << "using the FLV Strategy..." << std::endl;
        }

    }

}
