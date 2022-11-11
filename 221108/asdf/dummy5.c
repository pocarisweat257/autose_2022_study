#include <stdlib.h>
char *func(char *p);

int main()
{
    char * a = "hello";
    a = func(a);
    exit(0);
}

char *func(char *p)
{
    return(p);
}

