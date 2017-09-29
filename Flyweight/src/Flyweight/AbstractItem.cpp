#include "Flyweight/AbstractItem.h"

namespace GoF {

    namespace Flyweight {

        AbstractItem::AbstractItem(const char _symbol)
            : symbol(_symbol),
              position { }
        { }

        AbstractItem::~AbstractItem()
        { }

    }

}
