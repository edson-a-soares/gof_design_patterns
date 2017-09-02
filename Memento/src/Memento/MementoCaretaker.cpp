#include <iostream>
#include "Memento/MementoCaretaker.h"

namespace GoF {

    namespace Memento {

        MementoCaretaker::MementoCaretaker()
            : states { }
        { }

        BookManagerMemento MementoCaretaker::getLastMemento()
        {
            if ( states.empty() ) {
                std::cout << "There's no states to return anymore." << std::endl;
                exit(1);
            }

            states.pop_back();
            return states.back();
        }

        void MementoCaretaker::addMemento(const BookManagerMemento & memento)
        {
            states.push_back(memento);
        }

    }

}
