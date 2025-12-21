#include <stdio.h>

int main()
{
    int a = 40;
    int *p = &a;

    printf("Value of a        = %d\n", a);
    printf("Address of a     = %p\n", &a);
    printf("Value of p       = %p\n", p);
    printf("Value pointed by p = %d\n", *p);

    return 0;
}
