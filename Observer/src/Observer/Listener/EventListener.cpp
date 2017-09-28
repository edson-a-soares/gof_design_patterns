#include <iostream>
#include "Observer/Listener/EventListener.h"

namespace GoF {

    namespace Observer {

        namespace Listener {

            void EventListener::update(const std::string & value) {
                std::cout << value << std::endl;
            }

        }

    }

}
