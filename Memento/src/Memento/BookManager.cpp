#include <iostream>
#include "Memento/BookManager.h"

namespace GoF {

    namespace Memento {

        BookManager::BookManager()
            : memento { },
              caretaker { },
              booksRecord { }
        { }

        void BookManager::addBook(const Book & book)
        {
            booksRecord[ book.getISBN() ] = book;
            caretaker.addMemento(getMemento());
        }

        void BookManager::report()
        {

            for ( auto iterator = booksRecord.rbegin(); iterator != booksRecord.rend(); ++iterator ) {

                std::cout << "ISBN  : " << iterator->second.getISBN() << std::endl;
                std::cout << "Title : " << iterator->second.getTitle() << std::endl;
                std::cout << "Author: " << iterator->second.getAuthor() << "\n" << std::endl;

            }

        }

        void BookManager::undo()
        {
            booksRecord = caretaker.getLastMemento().getState();
        }

        BookManagerMemento BookManager::getMemento() const
        {
            return BookManagerMemento(booksRecord);
        }

    }

}
