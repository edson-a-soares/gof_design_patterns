#include <algorithm>
#include "Observer/Subject.h"

namespace GoF {

    namespace Observer {

        Subject::Subject()
            : state(""),
              listeners { }
        { }

        Subject::Subject(const std::string & _state)
            : state(_state),
              listeners { }
        { }

        Subject::~Subject()
        {
            listeners.erase(listeners.begin(), listeners.end());
            listeners.clear();
        }

        void Subject::attach(IObserver * observer)
        {
            listeners.push_back(observer);
        }

        void Subject::detach(IObserver * observer)
        {
            std::vector<IObserver *>::iterator position = std::find(listeners.begin(), listeners.end(), observer);
            if ( position != listeners.end() ) {
                listeners.erase(position);
            }
        }

        std::string Subject::getState() const
        {
            return state;
        }

        void Subject::notify()
        {
            for ( int counter = 0; counter < listeners.size(); counter++ ) {
                listeners[counter]->update(getState());
            }
        }

    }

}
