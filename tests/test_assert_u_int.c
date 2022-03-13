#include "config.h"

#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <stdint.h>
#include <cmocka.h>
#include <cmocka_private.h>

static void test_assert_int_equal(void **state)
{
    (void)state; /* unused */
    assert_int_equal(0, 0);
    assert_int_equal(-1, -1);
    assert_int_equal(INTMAX_MIN, INTMAX_MIN);
    assert_int_equal(INTMAX_MAX, INTMAX_MAX);
}

int main(void) {
    const struct CMUnitTest integer_tests[] = {
        cmocka_unit_test(test_assert_int_equal),
    };

    return cmocka_run_group_tests(integer_tests, NULL, NULL);
}
