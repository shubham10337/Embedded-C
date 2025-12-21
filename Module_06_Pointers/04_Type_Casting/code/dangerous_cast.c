#include <stdio.h>

int main()
{
    int a = 0x12345678;
    char *p;

    p = (char *)&a;

    printf("First byte = %x\n", *p);

    return 0;
}
