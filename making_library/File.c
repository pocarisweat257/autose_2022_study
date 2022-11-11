#include "File.h"

#define BUFFER_SIZE 1024

File FileOpen(String filename, File_Mode mode)
{
    return(fopen(filename, (mode == FILE_MODE_READ) ? "rb" : "wb"));
}

String FileRead(File f)
{
    static char buffer[BUFFER_SIZE];
    fgets(buffer, BUFFER_SIZE, f);
    return(MakeString(buffer));
}

int FileWrite(File f, String s)
{
    fprintf(f, s);
    fflush(f);
    return 0;
}

int FileClose(File f)
{
    fclose(f);
    return 0;
}

