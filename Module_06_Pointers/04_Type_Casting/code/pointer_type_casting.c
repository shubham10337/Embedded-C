#include <stdio.h>

int main()
{
    int a = 65;
    char *p;

    p = (char *)&a;

    printf("Integer value = %d\n", a);
    printf("Value via char pointer = %d\n", *p);

    return 0;
}
