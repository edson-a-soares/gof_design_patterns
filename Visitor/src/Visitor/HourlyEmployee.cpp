#include <iostream>
#include <stdexcept>
#include "Visitor/HourlyEmployee.h"

namespace GoF {
namespace Visitor {


    HourlyEmployee::HourlyEmployee(
        const std::string & name,
        const std::string & ssn,
        double hourlyRate,
        double workedHours
    )
        : AbstractEmployee(name, ssn),
          _hourlyRate(hourlyRate),
          _workedHours(workedHours)
    {
        if ( _hourlyRate <= 0.0 )
            throw std::invalid_argument("Invalid value for Hourly Rate.");

        auto workingHoursLegalLimit = 40 * LEGAL_OVERTIME_PERCENTAGE_LIMIT;
        if ( _workedHours  <= 0.0 || _workedHours > workingHoursLegalLimit )
            throw std::invalid_argument("Invalid Value for Worked Hours.");
    }

    double HourlyEmployee::hourlyRate() const
    {
        return _hourlyRate;
    }

    double HourlyEmployee::workedHours() const
    {
        return _workedHours;
    }

    void HourlyEmployee::accept(std::shared_ptr<EmployeeVisitorInterface> visitor)
    {
        visitor->visit(this);
    }

    std::string HourlyEmployee::toString() const
    {
        auto output = "\nHourly employee: " +
            AbstractEmployee::toString()    +
                "\nHourly Rate: "  + std::to_string(hourlyRate()) +
                "\nHours Worked: " + std::to_string(workedHours());

        return output;
    }

    std::ostream & operator<<(std::ostream & outputStream, const HourlyEmployee & employee)
    {
        outputStream << employee.toString();
        return outputStream;
    }


} }
