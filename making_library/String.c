#include <stdlib.h>
#include <string.h>

#include "String.h"

String MakeString(const char * s)
{
    return(strdup(s));
}

int DeleteString(String s)
{
    free(s);
    return 0;
}

int IsStringSame(String s1, String s2)
{
    return(!strcmp(s1, s2));
}

