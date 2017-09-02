#include "Memento/Book.h"

namespace GoF {

    namespace Memento {

        Book::Book()
            : isbn(""),
              title(""),
              author("")
        { }

        Book::Book(
            const std::string & _isbn,
            const std::string & _title,
            const std::string & _author)
            : isbn(_isbn),
              title(_title),
              author(_author)
        { }

        std::string Book::getISBN() const
        {
            return isbn;
        }

        std::string Book::getTitle() const
        {
            return title;
        }

        std::string Book::getAuthor() const
        {
            return author;
        }

    }

}
