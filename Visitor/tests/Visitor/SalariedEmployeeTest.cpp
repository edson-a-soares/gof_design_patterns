#include "gtest/gtest.h"
#include "Visitor/SalariedEmployee.h"

using GoF::Visitor::SalariedEmployee;

TEST(SalariedEmployeeTest, SalariedEmployeeConstructorInvalidArguments) {

    ASSERT_THROW(SalariedEmployee("", "000", 100),    std::invalid_argument);
    ASSERT_THROW(SalariedEmployee("John", "", 100),   std::invalid_argument);
    ASSERT_THROW(SalariedEmployee("John", "000", -1), std::invalid_argument);

}
