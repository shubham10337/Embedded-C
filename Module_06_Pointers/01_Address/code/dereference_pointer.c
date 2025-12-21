#include <stdio.h>

int main()
{
    int a = 30;
    int *p;

    p = &a;

    printf("Value of a = %d\n", a);
    printf("Value pointed by p = %d\n", *p);

    return 0;
}
