#include "gtest/gtest.h"
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

class AmountHoursAndPayReportTestCase : public ::testing::Test
{
protected:

    virtual void SetUp()
    {
        report = new AmountHoursAndPayReport();
    }

    virtual void TearDown() {
        delete report;
        report = nullptr;
    }

    IEmployeeVisitor * report = nullptr;

};

TEST_F(AmountHoursAndPayReportTestCase, HourlyEmployee) {

    auto * employee = new HourlyEmployee("", "", 16.75, 40);

    employee->accept(report);
    ASSERT_EQ(1600, employee->getEarnings());

}

TEST_F(AmountHoursAndPayReportTestCase, SalariedEmployee) {

    auto * employee = new SalariedEmployee("", "", 800);

    employee->accept(report);
    ASSERT_EQ(800, employee->getEarnings());

}

TEST_F(AmountHoursAndPayReportTestCase, CommissionEmployee) {

    auto * employee = new CommissionEmployee("", "", 10000, .06 );

    employee->accept(report);
    ASSERT_EQ(600, employee->getEarnings());

}
