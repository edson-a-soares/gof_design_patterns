#include <gtest/gtest.h>
#include "Singleton/Session.h"

using GoF::Singleton::Session;

class SessionTestCase : public ::testing::Test
{
protected:

    virtual void SetUp()
    {
        Session::getInstance().startSession();
        Session::getInstance().setValue(10);
    }

};

TEST_F(SessionTestCase, SessionNotSetValue) {

    ASSERT_EQ(10, Session::getInstance().getValue());

}

TEST_F(SessionTestCase, SessionStarted) {

    ASSERT_EQ(true, Session::getInstance().isOpened());

}

TEST_F(SessionTestCase, SessionFinished) {

    Session::getInstance().destroySession();
    ASSERT_EQ(false, Session::getInstance().isOpened());

}
