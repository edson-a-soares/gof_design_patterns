#include "Iterator/Movie.h"

namespace GoF {

    namespace Iterator {

        Movie::Movie()
            : year("0000"),
              title(""),
              director("")
        { }

        Movie::Movie(
            const std::string & _year,
            const std::string & _title,
            const std::string & _director
        )
            : year(_year),
              title(_title),
              director(_director)
        { }

        std::string Movie::getYear() const
        {
            return year;
        }

        std::string Movie::getTitle() const
        {
            return title;
        }

        std::string Movie::getDirector() const
        {
            return director;
        }

    }

}
