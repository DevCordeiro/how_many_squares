#include "unity/src/unity.h"
#include "squares.h"

void setUp() {};
void tearDown() {};

void testValue_OneSquare()
{
    TEST_ASSERT_EQUAL(1, count_squares(1));
}

void testValue_TwoSquare()
{
    TEST_ASSERT_EQUAL(5, count_squares(2));
}

void testValue_ThreeSquare()
{
    TEST_ASSERT_EQUAL(14, count_squares(3));
}

void testValue_FourSquare()
{
    TEST_ASSERT_EQUAL(30, count_squares(4));
}

void testValue_FiveSquare()
{
    TEST_ASSERT_EQUAL(55, count_squares(5));
}

int main(void) 
{
    UNITY_BEGIN();
    RUN_TEST(testValue_OneSquare);
    RUN_TEST(testValue_TwoSquare);
    RUN_TEST(testValue_ThreeSquare);
    RUN_TEST(testValue_FourSquare);
    RUN_TEST(testValue_FiveSquare);
    UNITY_END();
}