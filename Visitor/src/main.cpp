#include <memory>
#include <iostream>
#include "Visitor/HourlyEmployee.h"
#include "Visitor/SalariedEmployee.h"
#include "Visitor/EmployeeInterface.h"
#include "Visitor/CommissionedEmployee.h"
#include "Visitor/NumberOfHoursAndPayReport.h"

using namespace GoF::Visitor;

int main(int argc, char * argv[]) {

    // Employee types
    auto salariedEmployee   = std::make_unique<SalariedEmployee>("John Smith", "111-11-1111", 800);
    auto hourlyEmployee     = std::make_unique<HourlyEmployee>("Karen Price", "222-22-2222", 16.75, 40);
    auto commissionEmployee = std::make_unique<CommissionedEmployee>("Sue Jones", "333-33-3333", 10000, .06 );

    // Payment report
    std::shared_ptr<EmployeeVisitorInterface> report = std::make_shared<NumberOfHoursAndPayReport>();

    hourlyEmployee->accept(report);
    commissionEmployee->accept(report);

    std::cout << *hourlyEmployee;
    std::cout << "\nEarned $" << hourlyEmployee->earnings() << "\n";

    std::cout << *salariedEmployee;
    std::cout << "\nEarned $" << salariedEmployee->earnings() << "\n";

    std::cout << *commissionEmployee;
    std::cout << "\nEarned $" << commissionEmployee->earnings() << "\n";

    return 0;

}
