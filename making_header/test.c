#include <stdio.h>

void test()
{
    char s[] = "test";
    char * p = s;
    p[0] = 'T';
    printf("%s\n", p);
}

int main(void)
{
    test();
    return 0;
}

