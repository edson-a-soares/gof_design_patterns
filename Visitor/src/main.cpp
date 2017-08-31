#include <iostream>

#include "Visitor/IEmployee.h"
#include "Visitor/HourlyEmployee.h"
#include "Visitor/SalariedEmployee.h"
#include "Visitor/CommissionEmployee.h"
#include "Visitor/AmountHoursAndPayReport.h"

using GoF::Visitor::IEmployee;
using GoF::Visitor::HourlyEmployee;
using GoF::Visitor::IEmployeeVisitor;
using GoF::Visitor::SalariedEmployee;
using GoF::Visitor::CommissionEmployee;
using GoF::Visitor::AmountHoursAndPayReport;

int main(int argc, char * argv[]) {

    // Employee types
    IEmployee * salariedEmployee   = new SalariedEmployee("John Smith", "111-11-1111", 800);
    IEmployee * hourlyEmployee     = new HourlyEmployee("Karen Price", "222-22-2222", 16.75, 40);
    IEmployee * commissionEmployee = new CommissionEmployee("Sue Jones", "333-33-3333", 10000, .06 );

    // Payment report
    IEmployeeVisitor * report = new AmountHoursAndPayReport();

    hourlyEmployee->accept(report);
    salariedEmployee->accept(report);
    commissionEmployee->accept(report);

    hourlyEmployee->print();
    std::cout << "\nEarned $" << hourlyEmployee->getEarnings() << "\n";

    salariedEmployee->print();
    std::cout << "\nEarned $" << salariedEmployee->getEarnings() << "\n";

    commissionEmployee->print();
    std::cout << "\nEarned $" << commissionEmployee->getEarnings() << "\n";


    delete report;
    delete hourlyEmployee;
    delete salariedEmployee;
    delete commissionEmployee;

    return 0;

}
