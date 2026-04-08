#ifndef filework
#define filework

#include "StrFunc.h"


char * OpenAndReadFile(const char* myfile, int * ReadSize);
int PrintToFile(ptrs* ptrsarr, int linescnt);

#endif