#include <iostream>
#include "AbstractFactory/IOS/IOSButton.h"

namespace GoF {
namespace AbstractFactory {


    void IOSButton::render()
    {
        std::cout << "IOSButton" << std::endl;
    }


} }
