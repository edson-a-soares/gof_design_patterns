#include "FactoryMethod/Skyline.h"
#include "FactoryMethod/NissanFactory.h"

namespace GoF {

    namespace FactoryMethod {

        ICar * NissanFactory::create()
        {
            return new Skyline(
                "Skyline",
                "Blue",
                "1957",
                "Japan"
            );
        }

    }

}
