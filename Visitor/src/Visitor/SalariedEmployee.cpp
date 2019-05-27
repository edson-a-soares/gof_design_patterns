#include <iostream>
#include <stdexcept>
#include "Visitor/SalariedEmployee.h"

namespace GoF {
namespace Visitor {


    SalariedEmployee::SalariedEmployee(const std::string & name, const std::string & ssn, double salary)
        : AbstractEmployee(name, ssn),
          _weeklySalary(salary)
    {
        if ( _weeklySalary <= 0.0 )
            throw std::invalid_argument("Invalid value for Employee salary.");
        earnings(_weeklySalary);
    }

    double SalariedEmployee::weeklySalary() const
    {
        return _weeklySalary;
    }

    std::string SalariedEmployee::toString() const
    {
        auto output = "\nSalaried employee: " +
            AbstractEmployee::toString() +
                "\nWeekly salary: " + std::to_string(weeklySalary());

        return output;
    }

    std::ostream & operator<<(std::ostream & outputStream, const SalariedEmployee & employee)
    {
        outputStream << employee.toString();
        return outputStream;
    }


} }
