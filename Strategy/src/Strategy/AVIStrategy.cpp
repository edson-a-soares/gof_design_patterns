#include <iostream>
#include "Strategy/AVIStrategy.h"

namespace GoF {

    namespace Strategy {

        AVIStrategy::AVIStrategy()
        { }

        void AVIStrategy::execute()
        {
            std::cout << "using the AVI Strategy..." << std::endl;
        }

    }

}
