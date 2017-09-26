#include "Iterator/MoviesIterator.h"

namespace GoF {

    namespace Iterator {

        MoviesIterator::MoviesIterator()
            : list { },
              counter(0)
        { }

        MoviesIterator::MoviesIterator(std::vector<Movie> & _list)
            : list(_list),
              counter(0)
        { }

        MoviesIterator::~MoviesIterator()
        {
            list.clear();
        }

        void MoviesIterator::next()
        {
            counter++;
        }

        void MoviesIterator::first()
        {
            counter = 0;
        }

        bool MoviesIterator::isDone()
        {
            return counter == list.size();
        }

        Movie MoviesIterator::currentItem()
        {
            return list[counter];
        }

    }

}
