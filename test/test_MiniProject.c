#include "unity.h"
#include "MiniProject.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_2_add_3_must_return_5(void)
{
	int result;
	result = Addition(2, 3);
	TEST_ASSERT_EQUAL(5, result);
}

void test_4_add_5_multiply_6_should_return_34(void)
{
	int result;
	result = additionAndMultiply(4, 5, 6);
	TEST_ASSERT_EQUAL(34, result);
}
