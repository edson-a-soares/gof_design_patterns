#include <memory>
#include <iostream>
#include "AbstractFactory/SquareBoard.h"
#include "AbstractFactory/IOS/IOSFactory.h"
#include "AbstractFactory/UIFactoryInterface.h"
#include "AbstractFactory/Android/AndroidFactory.h"

using namespace GoF::AbstractFactory;

int main(int argc, char * argv[]) {

    std::cout << "\nEnter with your SquareBoard Interface preferences: " << std::endl;
    std::cout << " - iOS "      << std::endl;
    std::cout << " - Android\n" << std::endl;

    std::string UIPreferences;
    std::shared_ptr<UIFactoryInterface> componentsFactory = nullptr;

    std::cin >> UIPreferences;

    if ( UIPreferences != "iOS" && UIPreferences != "Android" ) {
        std::cout << "Error: " << UIPreferences << " is not a valid UI option." << std::endl;
        exit(1);
    }

    if ( UIPreferences == "iOS" ) {
        componentsFactory = std::make_unique<IOSFactory>();
        std::cout << "\nYou chose an iOS SquareBoard Interface:" << std::endl;
    }

    if ( UIPreferences == "Android" ) {
        componentsFactory = std::make_unique<AndroidFactory>();
        std::cout << "\nYou chose an Android SquareBoard Interface:" << std::endl;
    }


    SquareBoard board = SquareBoard(componentsFactory);
    board.draw();

    return 0;

}
