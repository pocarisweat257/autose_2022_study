#ifndef __FILE_H__
#define __FILE_H__

#include <stdil.h>
#include "String.h"

typedef File * File;

typedef enum
{
    FILE_MODE_READ,
    FILE_MODE_WRITE
} File_Mode;

File FileOpen(String filename, File_Mode mode);
String FileRead(File f);
int FileWrite(File f, String s);
int FileClose(File f);

#endif
