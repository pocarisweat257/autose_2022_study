#include <stdio.h>
#include <stdlib.h>
#include "strcopy.h"

#define TEST_STRING "this is a test.\n"

int main(void)
{
    char * src = TEST_STRING;
    char dst[sizeof(TEST_STRING)];

    strcopy(dst, src);

    printf("src: %s", src);
    printf("dst: %s", dst);
    return 0;
}

