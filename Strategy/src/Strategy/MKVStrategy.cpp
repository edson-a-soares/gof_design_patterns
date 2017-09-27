#include <iostream>
#include "Strategy/MKVStrategy.h"

namespace GoF {

    namespace Strategy {

        MKVStrategy::MKVStrategy()
        { }

        void MKVStrategy::execute()
        {
            std::cout << "using the MKV Strategy..." << std::endl;
        }

    }

}
