#include <stdio.h>

int main()
{
    int a = 20;
    int *p;

    p = &a;

    printf("Address of a = %p\n", &a);
    printf("Value of p = %p\n", p);

    return 0;
}
