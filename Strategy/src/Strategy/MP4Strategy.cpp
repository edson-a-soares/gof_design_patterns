#include <iostream>
#include "Strategy/MP4Strategy.h"

namespace GoF {

    namespace Strategy {

        MP4Strategy::MP4Strategy()
        { }

        void MP4Strategy::execute()
        {
            std::cout << "using the MP4 Strategy..." << std::endl;
        }

    }

}
