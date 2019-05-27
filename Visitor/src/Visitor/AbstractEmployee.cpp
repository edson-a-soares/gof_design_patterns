#include <iostream>
#include <stdexcept>
#include "Visitor/AbstractEmployee.h"

namespace GoF {
namespace Visitor {


    AbstractEmployee::AbstractEmployee(const std::string & name, const std::string & ssn)
        : _name(name),
          _earnings(0),
          _socialSecurityNumber(ssn)
    {
        if ( _name.empty() )
            throw std::invalid_argument("Employee name can be anything but empty.");

        if ( _socialSecurityNumber.empty() )
            throw std::invalid_argument("Employee SSN can be anything but empty.");
    }

    void AbstractEmployee::earnings(double value)
    {
        if ( value <= 0 )
            throw std::invalid_argument("Invalid employee earnings value.");

        _earnings = value;
    }

    double AbstractEmployee::earnings() const
    {
        return _earnings;
    }

    std::string AbstractEmployee::name() const
    {
        return _name;
    }

    std::string AbstractEmployee::socialSecurityNumber() const
    {
        return _socialSecurityNumber;
    }

    std::string AbstractEmployee::toString() const
    {
        return "\nName: " + name() +
               "\nSocial Security Number: " + socialSecurityNumber();
    }


} }
