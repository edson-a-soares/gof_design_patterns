#include <iostream>
#include "FactoryMethod/ICar.h"
#include "FactoryMethod/TeslaFactory.h"
#include "FactoryMethod/NissanFactory.h"

using GoF::FactoryMethod::ICar;
using GoF::FactoryMethod::TeslaFactory;
using GoF::FactoryMethod::NissanFactory;

int main(int argc, char * argv[]) {

    TeslaFactory teslaFactory;
    ICar * teslaCar = teslaFactory.create();

    std::cout << "\nName.: " << teslaCar->getName() << std::endl;
    std::cout << "Color.: " << teslaCar->getColor() << std::endl;
    std::cout << "Vehicle Year.: " << teslaCar->getVehicleYear() << std::endl;
    std::cout << "Origin Country.: " << teslaCar->getOriginCountry() << std::endl;

    NissanFactory nissanFactory;
    ICar * nissanCar = nissanFactory.create();

    std::cout << "\nName.: " << nissanCar->getName() << std::endl;
    std::cout << "Color.: " << nissanCar->getColor() << std::endl;
    std::cout << "Vehicle Year.: " << nissanCar->getVehicleYear() << std::endl;
    std::cout << "Origin Country.: " << nissanCar->getOriginCountry() << std::endl;


    delete teslaCar;
    delete nissanCar;

    return 0;

}
