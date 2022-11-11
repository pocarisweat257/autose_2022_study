#include "strcopy.h"

void strcopy(const char * dst, const char * src)
{
    while(*src != '\0')
    {
        *(dst++) = *(src++);
    }
    *dst = '\0';
}

