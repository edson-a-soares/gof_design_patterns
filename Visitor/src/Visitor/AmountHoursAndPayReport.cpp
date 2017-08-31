#include "Visitor/AmountHoursAndPayReport.h"

namespace GoF {

    namespace Visitor {

        void AmountHoursAndPayReport::visit(HourlyEmployee * employee)
        {
            double earnings = 0;
            if ( employee->getHours() <= 40 ) {
                earnings = employee->getHours() * employee->getHours();
            } else {
                earnings = 40 * employee->getHours() + ((employee->getHours() - 40) * employee->getHours() * 1.5);
            }

            employee->setEarnings(earnings);
        }

        void AmountHoursAndPayReport::visit(SalariedEmployee *)
        { }

        void AmountHoursAndPayReport::visit(CommissionEmployee * employee)
        {
            employee->setEarnings(employee->getCommissionRate() * employee->getGrossSales());
        }

    }

}
