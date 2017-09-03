#include "Singleton/Session.h"

namespace GoF {

    namespace Singleton {

        Session::Session()
            : value(0),
              opened(false)
        { }

        Session & Session::getInstance()
        {
            static Session instance;
            return instance;
        }

        void Session::setValue(int _value)
        {
            value = _value;
        }

        int Session::getValue() const
        {
            return value;
        }

        bool Session::isOpened() const
        {
            return opened;
        }

        void Session::startSession()
        {
            opened = true;
        }

        void Session::destroySession()
        {
            opened = false;
        }

    }

}
