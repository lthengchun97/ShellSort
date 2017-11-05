#include "unity.h"
#include "shell.h"
#include <stdio.h>

void setUp(void)
{
}

void tearDown(void)
{
}

void test_shell_sort_with_5_values(void)
{
    int arr[]={9,8,5,11,10};
    shellSort(arr,5);
    int expect[]={5,8,9,10,11};
    TEST_ASSERT_EQUAL(arr,expect);
}
