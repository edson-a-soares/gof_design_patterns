#include <iostream>
#include "Facade/RentingServiceFacade.h"

namespace GoF {

    namespace Facade {

        RentingServiceFacade::RentingServiceFacade(
            const PaymentService _paymentService,
            const InventoryService _inventoryService)
            : renter { },
              vehicle { },
              rentingTime(0),
              paymentService(_paymentService),
              inventoryService(_inventoryService)
        { }

        double RentingServiceFacade::getTotalCost() const
        {
            return rentingTime * vehicle.getPrice();
        }

        void RentingServiceFacade::setRentingTime(int time)
        {
            rentingTime = time;
        }

        void RentingServiceFacade::setVehicle(const Car _vehicle)
        {
            vehicle = _vehicle;
        }

        void RentingServiceFacade::setRenter(const Renter _renter)
        {
            renter = _renter;
        }

        void RentingServiceFacade::rent()
        {
            if ( !inventoryService.isAvailable(vehicle) ) {
                std::cout << "The vehicle " << vehicle.getModel() << " is not available." << std::endl;
                exit(1);
            }

            if ( !renter.getAge() > 18 ) {
                std::cout << "The renter " << renter.getName() << " is not old enough to rent a car." << std::endl;
                exit(1);
            }

            std::cout << "\nRenter: " << renter.getName() << std::endl;
            paymentService.pay(getTotalCost(), vehicle.getModel());
        }

    }

}
