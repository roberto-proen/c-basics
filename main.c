#include <stdio.h>
#include "externalsrc.h"


int main()
{
    if (0)
    {
        printf("not print");
    }

    (0) ? printf("not print") :  printf("this prints\n");
    int VALUE_CONST = 16;
    printf("%d", VALUE_CONST);
    *(&VALUE_CONST) = 17;
    printf("%d\n", VALUE_CONST);

    char  poorString[20] = {67, 73, 171, '\n', 00};
    printf(poorString);

    printf("%p\n", poorString);
    printf("%p\n", &poorString);
    printf("%p\n", VALUE_CONST);

    printf("%c\n", *(poorString + 2*sizeof(char)));

    myFunction(*poorString);

    return 0;
}