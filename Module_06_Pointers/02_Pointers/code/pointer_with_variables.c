#include <stdio.h>

int main()
{
    int a = 10;
    int *p = &a;

    printf("Initial value of a = %d\n", a);

    *p = 20;   // modify via pointer

    printf("Modified value of a = %d\n", a);

    return 0;
}
