#include "gtest/gtest.h"
#include "Visitor/HourlyEmployee.h"

using GoF::Visitor::HourlyEmployee;

TEST(HourlyEmployeeTest, HourlyEmployeeConstructorInvalidArguments) {

    ASSERT_THROW(HourlyEmployee("", "000", 20, 40 ),       std::invalid_argument);
    ASSERT_THROW(HourlyEmployee("Brandon", "", 20, 40 ),   std::invalid_argument);
    ASSERT_THROW(HourlyEmployee("Brandon", "000", 0, 40 ), std::invalid_argument);
    ASSERT_THROW(HourlyEmployee("Brandon", "000", 20, 0 ), std::invalid_argument);

}
