#include <iostream>
#include "AbstractFactory/IOS/IOSLabel.h"

namespace GoF {
namespace AbstractFactory {


    void IOSLabel::render()
    {
        std::cout << "IOSLabel" << std::endl;
    }


} }
