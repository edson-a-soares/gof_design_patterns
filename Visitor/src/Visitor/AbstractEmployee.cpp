#include <iostream>
#include "Visitor/AbstractEmployee.h"

namespace GoF {

    namespace Visitor {

        AbstractEmployee::AbstractEmployee(
            const std::string & _name,
            const std::string & ssn
        )
            : name(_name),
              earnings(0),
              socialSecurityNumber(ssn)
        { }

        AbstractEmployee::~AbstractEmployee()
        { }

        void AbstractEmployee::setEarnings(double value)
        {
            earnings = value;
        }

        double AbstractEmployee::getEarnings() const
        {
            return earnings;
        }

        std::string AbstractEmployee::getName() const
        {
            return name;
        }

        std::string AbstractEmployee::getSocialSecurityNumber() const
        {
            return socialSecurityNumber;
        }

        void AbstractEmployee::print() const
        {
            std::cout << "\nName: " << getName()
                << "\nSocial Security Number: " << getSocialSecurityNumber();
        }

    }

}
