#include "Memento/BookManagerMemento.h"

namespace GoF {

    namespace Memento {

        BookManagerMemento::BookManagerMemento()
            : booksRecord { }
        { }

        BookManagerMemento::BookManagerMemento(const std::map<std::string, Book> & source)
            : booksRecord(source)
        { }

        std::map<std::string, Book> BookManagerMemento::getState() const
        {
            return booksRecord;
        }

    }

}
