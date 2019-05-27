#include "AbstractFactory/IOS/IOSPanel.h"
#include "AbstractFactory/IOS/IOSLabel.h"
#include "AbstractFactory/IOS/IOSButton.h"
#include "AbstractFactory/IOS/IOSFactory.h"

namespace GoF {
namespace AbstractFactory {


    std::unique_ptr<PanelInterface> IOSFactory::createPanel()
    {
        return std::make_unique<IOSPanel>();
    }

    std::unique_ptr<LabelInterface> IOSFactory::createLabel()
    {
        return std::make_unique<IOSLabel>();
    }

    std::unique_ptr<ButtonInterface> IOSFactory::createButton()
    {
        return std::make_unique<IOSButton>();
    }


} }
