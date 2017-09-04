#include <iostream>
#include "AbstractFactory/UIFactory.h"
#include "AbstractFactory/IOSFactory.h"
#include "AbstractFactory/AndroidFactory.h"

using GoF::AbstractFactory::IPanel;
using GoF::AbstractFactory::ILabel;
using GoF::AbstractFactory::IButton;
using GoF::AbstractFactory::UIFactory;
using GoF::AbstractFactory::IOSFactory;
using GoF::AbstractFactory::AndroidFactory;

int main(int argc, char * argv[]) {

    std::cout << "\nEnter with your SquareBoard Interface preferences: " << std::endl;
    std::cout << " - iOS " << std::endl;
    std::cout << " - Android\n" << std::endl;

    std::string uiPreferences;
    UIFactory * userInterfaceFactory = nullptr;

    std::cin >> uiPreferences;

    if ( uiPreferences != "iOS" && uiPreferences != "Android" ) {
        std::cout << "Error: " << uiPreferences << " is not a valid UI option." << std::endl;
        exit(1);
    }

    if ( uiPreferences == "iOS" ) {
        userInterfaceFactory = new IOSFactory();
        std::cout << "\nYou chose an iOS SquareBoard Interface:" << std::endl;
    }

    if ( uiPreferences == "Android" ) {
        userInterfaceFactory = new AndroidFactory();
        std::cout << "\nYou chose an Android SquareBoard Interface:" << std::endl;
    }

    IPanel * panel = userInterfaceFactory->createPanel();
    panel->render();

    ILabel * label = userInterfaceFactory->createLabel();
    label->render();

    IButton * button = userInterfaceFactory->createButton();
    button->render();


    delete panel;
    delete label;
    delete button;
    delete userInterfaceFactory;

    return 0;

}
