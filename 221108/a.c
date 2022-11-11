#include <stdio.h>
extern int g;
void plusOne(int a);
int main()
{
    printf("%d\n", g);
    plusOne(g);
    printf("g = %d\n", g);
    plusOne(g);
    printf("g = %d\n", g);
    return 0;
}

