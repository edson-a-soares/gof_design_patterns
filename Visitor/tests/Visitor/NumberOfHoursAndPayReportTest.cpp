#include <memory>
#include "gtest/gtest.h"
#include "Visitor/HourlyEmployee.h"
#include "Visitor/SalariedEmployee.h"
#include "Visitor/CommissionedEmployee.h"
#include "Visitor/NumberOfHoursAndPayReport.h"

using namespace GoF::Visitor;

class NumberOfHoursAndPayReportTest : public ::testing::Test
{
protected:
    virtual void SetUp()
    {
        report = std::make_shared<NumberOfHoursAndPayReport>();
    }

    std::shared_ptr<EmployeeVisitorInterface> report = nullptr;

};

TEST_F(NumberOfHoursAndPayReportTest, HourlyEmployeePayReport) {

    auto employee = HourlyEmployee("Jefferson", "000", 16.75, 40);
    employee.accept(report);
    ASSERT_EQ(670, employee.earnings());

    auto employeeWithAdditionalWorkTime = HourlyEmployee("Jefferson", "000", 16.75, 45);
    employeeWithAdditionalWorkTime.accept(report);
    ASSERT_EQ(795.625, employeeWithAdditionalWorkTime.earnings());

}

TEST_F(NumberOfHoursAndPayReportTest, SalariedEmployeePayReport) {

    auto employee = SalariedEmployee("Jefferson", "000", 800);
    ASSERT_EQ(800, employee.earnings());

}

TEST_F(NumberOfHoursAndPayReportTest, CommissionEmployeePayReport) {

    auto employee = CommissionedEmployee("Jefferson", "000", 10000, .06 );

    employee.accept(report);
    ASSERT_EQ(600, employee.earnings());

}
