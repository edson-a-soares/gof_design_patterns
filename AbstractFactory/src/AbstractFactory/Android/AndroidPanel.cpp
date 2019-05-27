#include <iostream>
#include "AbstractFactory/Android/AndroidPanel.h"

namespace GoF {
namespace AbstractFactory {


    void AndroidPanel::render()
    {
        std::cout << "AndroidPanel" << std::endl;
    }


} }
