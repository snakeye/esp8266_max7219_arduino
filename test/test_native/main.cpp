#include <unity.h>

#include "common.h"

int main(int argc, char **argv)
{
    UNITY_BEGIN();

    run_tests_common();

    UNITY_END();

    return 0;
}
