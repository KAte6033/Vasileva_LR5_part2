#include "CUTE/cute/cute.h"
#include "CUTE/cute/ide_listener.h"
#include "CUTE/cute/cute_runner.h"
#include "Vasileva_MathTask.h"

using namespace cute;

void test_UserInput_empty ()
{
    string str = "";

    bool expected = false;

    bool actual = UserInput(str);

    ASSERT_EQUAL(expected, actual);
}

void test_UserInput_negative ()
{
    string str = "-8";

    bool expected = false;

    bool actual = UserInput(str);

    ASSERT_EQUAL(expected, actual);
}


void test_UserInput_letters()
{
    string str = "a";

    bool expected = false;

    bool actual = UserInput(str);

    ASSERT_EQUAL(expected, actual);
}


void test_UserInput_letters_and_numbers ()
{
    string str = "12a";

    bool expected = false;

    bool actual = UserInput(str);

    ASSERT_EQUAL(expected, actual);
}





void test_modQonP ()
{
    int q = 7;
    int p = 3;

    int expected = 1;

    int actual = modQonP(q, p);

    ASSERT_EQUAL(expected, actual);

}

void test_divQonP ()
{
    int q = 10;
    int p = 3;

    int expected = 3;

    int actual = divQonP(q, p);

    ASSERT_EQUAL(expected, actual);

}

int main ()
{
    suite s;

    // test_UserInput_empty
    // test_UserInput_negative
    // test_UserInput_letters
    // test_UserInput_letters_and_numbers

    s.push_back(CUTE(test_UserInput_empty));
    s.push_back(CUTE(test_UserInput_negative));
    s.push_back(CUTE(test_UserInput_letters));
    s.push_back(CUTE(test_UserInput_letters_and_numbers));
    s.push_back(CUTE(test_modQonP));
    s.push_back(CUTE(test_divQonP));

    ide_listener<> listener;
    makeRunner(listener)(s,"All tests of integer numbers");

    return 0;

}