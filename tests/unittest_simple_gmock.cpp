#include <gmock_bug_demo/foo.h>
#include <gtest/gtest.h>
#include <gmock/gmock.h>

class FooMock : public Foo
{
public:
  MOCK_METHOD0(sayHello, bool());
};

// Declare another test
TEST(TestSuite, testCase2)
{
  FooMock mock;
}

// Run all the tests that were declared with TEST()
int main(int argc, char **argv){
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}