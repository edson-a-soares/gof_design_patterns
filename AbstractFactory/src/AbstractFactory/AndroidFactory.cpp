#include "AbstractFactory/AndroidPanel.h"
#include "AbstractFactory/AndroidLabel.h"
#include "AbstractFactory/AndroidButton.h"
#include "AbstractFactory/AndroidFactory.h"

namespace GoF {

    namespace AbstractFactory {

        AndroidFactory::AndroidFactory()
        { }

        IPanel * AndroidFactory::createPanel()
        {
            return new AndroidPanel();
        }

        ILabel * AndroidFactory::createLabel()
        {
            return new AndroidLabel();
        }

        IButton * AndroidFactory::createButton()
        {
            return new AndroidButton();
        }

    }

}
