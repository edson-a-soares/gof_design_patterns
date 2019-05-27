#include "Visitor/NumberOfHoursAndPayReport.h"

namespace GoF {
namespace Visitor {


    void NumberOfHoursAndPayReport::visit(HourlyEmployee * employee)
    {
        double earnings = 0;
        if ( employee->workedHours() <= 40 )
            earnings = employee->workedHours() * employee->hourlyRate();
        else
            earnings = 40 * employee->hourlyRate() + ((employee->workedHours() - 40) * employee->hourlyRate() * 1.5);

        employee->earnings(earnings);
    }

    void NumberOfHoursAndPayReport::visit(CommissionedEmployee * employee)
    {
        employee->earnings(employee->commissionRate() * employee->grossSales());
    }


} }
