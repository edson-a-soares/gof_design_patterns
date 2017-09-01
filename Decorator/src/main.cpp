#include <iostream>
#include "Decorator/SimpleCar.h"
#include "Decorator/BluetoothDecorator.h"
#include "Decorator/MediaStereoDecorator.h"
#include "Decorator/SmartDriveAssitantDecorator.h"

using GoF::Decorator::ICar;
using GoF::Decorator::SimpleCar;
using GoF::Decorator::BluetoothDecorator;
using GoF::Decorator::MediaStereoDecorator;
using GoF::Decorator::SmartDriveAssistantDecorator;

int main(int argc, char * argv[]) {

    std::cout << std::endl;

    ICar * car = new SimpleCar(5000.00, "A simple car");

    std::cout << "Car Description: " << car->getDescription() << std::endl;
    std::cout << "Car Price: " << car->getPrice() << std::endl;

    std::cout << "\nAdding Bluetooth to the simple car.\n" << std::endl;

    car = new BluetoothDecorator(car);

    std::cout << "Car Description: " << car->getDescription() << std::endl;
    std::cout << "Car Price: " << car->getPrice() << std::endl;

    std::cout << "\nAdding Digital Media Stereo to the simple car.\n" << std::endl;

    car = new MediaStereoDecorator(car);

    std::cout << "Car Description: " << car->getDescription() << std::endl;
    std::cout << "Car Price: " << car->getPrice() << std::endl;

    std::cout << "\nAdding Smart Drive Assistant to the simple car.\n" << std::endl;

    car = new SmartDriveAssistantDecorator(car);

    std::cout << "Car Description: " << car->getDescription() << std::endl;
    std::cout << "Car Price: " << car->getPrice() << std::endl;


    delete car;

    return 0;

}
