#include "FactoryMethod/ModelS.h"

namespace GoF {

    namespace FactoryMethod {

        ModelS::ModelS(
            const std::string & _name,
            const std::string & _color,
            const std::string & _vehicleYear,
            const std::string & _originCountry
        )
            : name(_name),
              color(_color),
              vehicleYear(_vehicleYear),
              originCountry(_originCountry)
        { }

        std::string ModelS::getName() const
        {
            return name;
        }

        std::string ModelS::getColor() const
        {
            return color;
        }

        std::string ModelS::getVehicleYear() const
        {
            return vehicleYear;
        }

        std::string ModelS::getOriginCountry() const
        {
            return originCountry;
        }

    }

}
