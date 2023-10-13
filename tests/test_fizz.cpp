#include <gtest/gtest.h>

import project.baz;

TEST(test_fizz, get_data){
	baz::fizz<std::string> f("Hello world!");
	ASSERT_EQ(f.get_data(),"Hello world!");
}