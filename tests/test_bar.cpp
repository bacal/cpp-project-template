#include <gtest/gtest.h>

import project.foo;

TEST(bar_tests, test_success){
  foo::bar b(32);
  ASSERT_EQ(b.get_quux(), 32);
}
