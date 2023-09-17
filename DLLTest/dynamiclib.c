
#include <stdio.h>


__declspec( dllexport ) int ExportedFunc(int aValue)
{
    printf("I Executed from inside a DLL receiving this value [%d]", aValue);

    return aValue + 75;
}