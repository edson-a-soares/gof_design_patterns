#include <iostream>
#include "Visitor/CommissionEmployee.h"

namespace GoF {

    namespace Visitor {

        CommissionEmployee::CommissionEmployee(
            const std::string & name,
            const std::string & ssn,
            double sales,
            double rate
        )
            : AbstractEmployee(name, ssn)
        {
            setGrossSales(sales);
            setCommissionRate(rate);
        }

        void CommissionEmployee::setCommissionRate(double rate)
        {
            commissionRate = ((rate > 0.0 && rate < 1.0) ? rate : 0.0);
        }

        double CommissionEmployee::getCommissionRate() const
        {
            return commissionRate;
        }

        void CommissionEmployee::setGrossSales(double sales)
        {
            grossSales = ((sales < 0.0) ? 0.0 : sales);
        }

        double CommissionEmployee::getGrossSales() const
        {
            return grossSales;
        }

        void CommissionEmployee::accept(IEmployeeVisitor * visitor)
        {
            visitor->visit(this);
        }

        void CommissionEmployee::print() const
        {
            std::cout << "\nCommission employee: ";
            AbstractEmployee::print();
            std::cout << "\nGross sales: " << getGrossSales()
                 << "\nCommission rate: " << getCommissionRate();
        }

    }

}
