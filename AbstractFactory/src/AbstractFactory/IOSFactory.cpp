#include "AbstractFactory/IOSPanel.h"
#include "AbstractFactory/IOSLabel.h"
#include "AbstractFactory/IOSButton.h"
#include "AbstractFactory/IOSFactory.h"

namespace GoF {

    namespace AbstractFactory {

        IOSFactory::IOSFactory()
        { }

        IPanel * IOSFactory::createPanel()
        {
            return new IOSPanel();
        }

        ILabel * IOSFactory::createLabel()
        {
            return new IOSLabel();
        }

        IButton * IOSFactory::createButton()
        {
            return new IOSButton();
        }

    }

}
