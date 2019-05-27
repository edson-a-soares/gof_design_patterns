#include <iostream>
#include <stdexcept>
#include "Visitor/CommissionedEmployee.h"

namespace GoF {
namespace Visitor {


    CommissionedEmployee::CommissionedEmployee(const std::string & name, const std::string & ssn, double sales, double rate)
        : AbstractEmployee(name, ssn),
          _grossSales(sales),
          _commissionRate(rate)
    {
        if ( _grossSales <= 0.0 )
            throw std::invalid_argument("Invalid value for Gross Sales.");

        if ( _commissionRate  < 0.0 || _commissionRate > 1.0 )
            throw std::invalid_argument("Invalid value for Commission Rate.");
    }

    double CommissionedEmployee::commissionRate() const
    {
        return _commissionRate;
    }

    double CommissionedEmployee::grossSales() const
    {
        return _grossSales;
    }

    void CommissionedEmployee::accept(std::shared_ptr<EmployeeVisitorInterface> visitor)
    {
        visitor->visit(this);
    }

    std::string CommissionedEmployee::toString() const
    {
        auto output = "\nCommission employee: " +
            AbstractEmployee::toString() +
                "\nGross sales: "     + std::to_string(grossSales()) +
                "\nCommissioned rate: " + std::to_string(commissionRate());

        return output;
    }

    std::ostream & operator<<(std::ostream & outputStream, const CommissionedEmployee & employee)
    {
        outputStream << employee.toString();
        return outputStream;
    }


} }
