#include "FactoryMethod/ModelS.h"
#include "FactoryMethod/TeslaFactory.h"

namespace GoF {

    namespace FactoryMethod {

        ICar * TeslaFactory::create()
        {
            return new ModelS(
                "ModelS",
                "Gray",
                "2015",
                "USA"
            );
        }

    }

}
