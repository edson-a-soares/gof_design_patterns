#include <iostream>
#include "Facade/Car.h"
#include "Facade/Renter.h"
#include "Facade/PaymentService.h"
#include "Facade/InventoryService.h"
#include "Facade/RentingServiceFacade.h"

using GoF::Facade::Car;
using GoF::Facade::Renter;
using GoF::Facade::PaymentService;
using GoF::Facade::InventoryService;
using GoF::Facade::RentingServiceFacade;

int main(int argc, char * argv[]) {

    RentingServiceFacade rentingServiceFacade = RentingServiceFacade(
        PaymentService(),
        InventoryService()
    );

    Renter renter = Renter(30, "Lucas Goodman", "00000000");
    rentingServiceFacade.setRenter(renter);

    Car vehicle = Car(50.0, "Model S");
    rentingServiceFacade.setRentingTime(10);
    rentingServiceFacade.setVehicle(vehicle);

    rentingServiceFacade.rent();

    return 0;
}
