#include "unity.h"
#include "dummy.h"


void setUp(void) {}
void tearDown(void) {}


void test_additionner_should_doAddition(void)
{
    /* Given */
    int a = 20;
    int b = 46;

    /* When */
    int resultat = additionner(a, b);

    /* Then */
    TEST_ASSERT_EQUAL_INT(66, resultat);
}

void test_programVersion_should_returnGoodVersion(void)
{
    /* Given */

    /* When */
    const char* version = programVersion();

    /* Then */
    TEST_ASSERT_EQUAL_STRING("0.1-SNAPSHOT", version);
}


int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_additionner_should_doAddition);
    RUN_TEST(test_programVersion_should_returnGoodVersion);
    return UNITY_END();
}
