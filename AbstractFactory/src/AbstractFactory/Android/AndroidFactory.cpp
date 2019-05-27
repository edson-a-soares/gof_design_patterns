#include "AbstractFactory/Android/AndroidPanel.h"
#include "AbstractFactory/Android/AndroidLabel.h"
#include "AbstractFactory/Android/AndroidButton.h"
#include "AbstractFactory/Android/AndroidFactory.h"

namespace GoF {
namespace AbstractFactory {


    std::unique_ptr<PanelInterface> AndroidFactory::createPanel()
    {
        return std::make_unique<AndroidPanel>();
    }

    std::unique_ptr<LabelInterface> AndroidFactory::createLabel()
    {
        return std::make_unique<AndroidLabel>();
    }

    std::unique_ptr<ButtonInterface> AndroidFactory::createButton()
    {
        return std::make_unique<AndroidButton>();
    }


} }
