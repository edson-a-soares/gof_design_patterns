#include <iostream>
#include "Visitor/HourlyEmployee.h"

namespace GoF {

    namespace Visitor {

        HourlyEmployee::HourlyEmployee(
            const std::string & name,
            const std::string & ssn,
            double hourlyWage,
            double hoursWorked
        )
            : AbstractEmployee(name, ssn)
        {
            setWage(hourlyWage);
            setHours(hoursWorked);
        }

        void HourlyEmployee::setWage(double hourlyWage)
        {
            wage = (hourlyWage < 0.0) ? 0.0 : hourlyWage;
        }

        double HourlyEmployee::getWage() const
        {
            return wage;
        }

        void HourlyEmployee::setHours(double hoursWorked)
        {
            hours = (((hoursWorked >= 0.0) && (hoursWorked <= 168.0)) ? hoursWorked : 0.0);
        }

        double HourlyEmployee::getHours() const
        {
            return hours;
        }

        void HourlyEmployee::accept(IEmployeeVisitor * visitor)
        {
            visitor->visit(this);
        }

        void HourlyEmployee::print() const
        {
            std::cout << "\nHourly employee: ";
            AbstractEmployee::print();
            std::cout << "\nHourly wage: " << getWage()
                << "\nHours worked: " << getHours();
        }

    }

}
