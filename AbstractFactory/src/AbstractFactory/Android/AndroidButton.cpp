#include <iostream>
#include "AbstractFactory/Android/AndroidButton.h"

namespace GoF {
namespace AbstractFactory {


    void AndroidButton::render()
    {
        std::cout << "AndroidButton" << std::endl;
    }


} }
