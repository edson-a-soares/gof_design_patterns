#include <iostream>
#include "AbstractFactory/IOS/IOSPanel.h"

namespace GoF {
namespace AbstractFactory {


    void IOSPanel::render()
    {
        std::cout << "IOSPanel" << std::endl;
    }


} }
