#include <stdio.h>

int main()
{
    int a = 50;
    int *p = &a;

    *p = 100;

    printf("Updated value of a = %d\n", a);

    return 0;
}
