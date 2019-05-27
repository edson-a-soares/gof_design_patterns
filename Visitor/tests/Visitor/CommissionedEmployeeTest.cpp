#include "gtest/gtest.h"
#include "Visitor/CommissionedEmployee.h"

using GoF::Visitor::CommissionedEmployee;

TEST(CommissionedEmployeeTest, CommissionEmployeeConstructorInvalidArguments) {

    ASSERT_THROW(CommissionedEmployee("", "000",  10000, .06 ),       std::invalid_argument);
    ASSERT_THROW(CommissionedEmployee("James", "",  10000, .06 ),     std::invalid_argument);
    ASSERT_THROW(CommissionedEmployee("James", "000", -10000, .06 ),  std::invalid_argument);
    ASSERT_THROW(CommissionedEmployee("James", "000", 10000, -0.06 ), std::invalid_argument);

}
