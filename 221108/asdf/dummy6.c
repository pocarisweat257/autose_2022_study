#include <stdlib.h>
int func(int p);

int main()
{
    int a = 0;
    a = func(a);
    exit(0);
}

char* func(char* p)
{
    return(p);
}

