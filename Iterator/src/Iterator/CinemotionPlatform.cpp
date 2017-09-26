#include "Iterator/MoviesIterator.h"
#include "Iterator/CinemotionPlatform.h"

namespace GoF {

    namespace Iterator {

        CinemotionPlatform::CinemotionPlatform()
            : catalog { }
        { }

        void CinemotionPlatform::loadCatalog()
        {
            catalog.push_back(Movie("1997", "The Edge", "Lee Tamahori"));
            catalog.push_back(Movie("2002", "Red Dragon", "Brett Ratner"));
            catalog.push_back(Movie("2011", "Thor", "Kenneth Branagh"));
            catalog.push_back(Movie("1999", "Entrapment", "Jon Amiel"));
            catalog.push_back(Movie("1996", "The Rock", "Michael Bay"));
        }

        IMoviesIterator * CinemotionPlatform::createIterator()
        {
            return new MoviesIterator(catalog);
        }

    }

}
