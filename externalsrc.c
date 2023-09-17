#include "externalsrc.h"
#include <stdio.h>
#include <windows.h>

void myFunction(int aValue)
{
  FILE *fl = fopen("DLLTest/aSimpleFile.txt", "r");

  if (fl != NULL)
  {
    char ch;

    do
    {
      ch = fgetc(fl);
      printf("%c", ch);
    } while (ch != EOF);

    fclose(fl);
  }

  printf("I just got executed! yay!!!! %d\n", aValue);

  HINSTANCE dynamicLib = LoadLibrary("DLLTest/dynamicLib.dll");
  printf("%p\n", dynamicLib);

  if (dynamicLib != NULL)
  {
    printf("loaded dylib\n");

    typedef void(* f_funci)(int);
    f_funci proc = (f_funci)GetProcAddress(dynamicLib, "ExportedFunc");
    printf("%p\n", proc);

    if (proc != NULL)
    {
      printf("found proc\n");
      proc(50);
    }
  }
}