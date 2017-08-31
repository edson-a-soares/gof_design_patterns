#include <iostream>
#include "Visitor/SalariedEmployee.h"

namespace GoF {

    namespace Visitor {

        SalariedEmployee::SalariedEmployee(
            const std::string & name,
            const std::string & ssn,
            const double salary
        )
            : AbstractEmployee(name, ssn)
        {
            setEarnings(salary);
            setWeeklySalary(salary);
        }

        void SalariedEmployee::setWeeklySalary(double salary)
        {
            weeklySalary = ( salary < 0.0 ) ? 0.0 : salary;
        }

        double SalariedEmployee::getWeeklySalary() const
        {
            return weeklySalary;
        }

        void SalariedEmployee::accept(IEmployeeVisitor * visitor)
        {
            visitor->visit(this);
        }

        void SalariedEmployee::print() const
        {
            std::cout << "\nSalaried employee: ";
            AbstractEmployee::print();
            std::cout << "\nWeekly salary: " << getWeeklySalary();
        }

    }

}
