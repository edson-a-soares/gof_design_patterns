#include "Observer/Event/Event.h"

namespace GoF {

    namespace Observer {

        namespace Event {

            Event::Event(const std::string & state)
                : Subject(state)
            { }

            Event::~Event()
            { }

            void Event::addEventListener(Listener::EventListener * listener)
            {
                Subject::attach(listener);
            }

            void Event::removeEventListener(Listener::EventListener * listener)
            {
                Subject::detach(listener);
            }

            void Event::trigger()
            {
                Subject::notify();
            }

        }

    }

}
