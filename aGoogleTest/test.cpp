#include "pch.h"
#include <gtest/gtest.h>

#include "..\aConsoleApplication\CTestClass.h"

//namespace {


// The fixture for testing class NewCppClass.
class CTestClassTest : public ::testing::Test {
protected:
    // You can remove any or all of the following functions if its body
    // is empty.

    CTestClassTest() {
        // You can do set-up work for each test here.
    }

    virtual ~CTestClassTest() {
        // You can do clean-up work that doesn't throw exceptions here.
    }

    // If the constructor and destructor are not enough for setting up
    // and cleaning up each test, you can define the following methods:

    virtual void SetUp() {
        // Code here will be called immediately after the constructor (right
        // before each test).
    }

    virtual void TearDown() {
        // Code here will be called immediately after each test (right
        // before the destructor).
    }

    // Objects declared here can be used by all tests in the test case for Foo.
};

// Tests that NewCppClass::getNumberToTest() is not equal to this fixed mumber.
TEST(CTestClassTest, ThisTestShallSucceed) {
    CTestClass testClass;
        
    // If fails, continue
    EXPECT_EQ(4*3, testClass.DoSomething() ) << "message OK";

    // If fails, stop Testing
    //ASSERT_EQ(4 * 3, testClass.DoSomething());
}

TEST(CTestClassTest, ThisTestShallFail) {
    CTestClass testClass;

    EXPECT_TRUE(testClass.DoSomethingMore()) << "This FAILURE message is an example. Return from function: " << (testClass.DoSomethingMore() ? "true":"false");
}

TEST(CTestClassTest, DISABLED_ThisTestIsDisabled) {
    CTestClass testClass;

    EXPECT_TRUE(testClass.DoSomethingMore());
}

int main(int argc, char** argv)
{
    //::testing::InitGoogleMock(&argc, argv);
    ::testing::InitGoogleTest(&argc, argv);
    int value = RUN_ALL_TESTS();

    //std::getchar(); // to hold the terminal open

    return value;
}

//}  // namespace