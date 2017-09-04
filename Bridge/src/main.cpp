#include <iostream>
#include "Bridge/Car.h"
#include "Bridge/Bus.h"
#include "Bridge/Truck.h"
#include "Bridge/RedInk.h"
#include "Bridge/WhiteInk.h"
#include "Bridge/Motorcycle.h"

using GoF::Bridge::Car;
using GoF::Bridge::Bus;
using GoF::Bridge::Truck;
using GoF::Bridge::RedInk;
using GoF::Bridge::IVehicle;
using GoF::Bridge::IInkColor;
using GoF::Bridge::WhiteInk;
using GoF::Bridge::Motorcycle;

int main(int argc, char * argv[]) {

    IInkColor * ink;
    IVehicle * vehicle;

    std::cout << "\nUsing Red Vehicles\n" << std::endl;

    ink = new RedInk();

    vehicle = new Car(ink);
    vehicle->start();
    vehicle->shutDown();

    vehicle = new Bus(ink);
    vehicle->start();
    vehicle->shutDown();

    vehicle = new Truck(ink);
    vehicle->start();
    vehicle->shutDown();

    vehicle = new Motorcycle(ink);
    vehicle->start();
    vehicle->shutDown();


    std::cout << "\nUsing White Vehicles\n" << std::endl;

    ink = new WhiteInk();

    vehicle = new Car(ink);
    vehicle->start();
    vehicle->shutDown();

    vehicle = new Bus(ink);
    vehicle->start();
    vehicle->shutDown();

    vehicle = new Truck(ink);
    vehicle->start();
    vehicle->shutDown();

    vehicle = new Motorcycle(ink);
    vehicle->start();
    vehicle->shutDown();


    delete vehicle;

    return 0;

}
