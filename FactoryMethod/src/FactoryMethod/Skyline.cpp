#include "FactoryMethod/Skyline.h"

namespace GoF {

    namespace FactoryMethod {

        Skyline::Skyline(
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

        std::string Skyline::getName() const
        {
            return name;
        }

        std::string Skyline::getColor() const
        {
            return color;
        }

        std::string Skyline::getVehicleYear() const
        {
            return vehicleYear;
        }

        std::string Skyline::getOriginCountry() const
        {
            return originCountry;
        }

    }

}
