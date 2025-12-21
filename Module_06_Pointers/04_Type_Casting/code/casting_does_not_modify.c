#include <stdio.h>

int main()
{
    int a = 100;
    char *p = (char *)&a;

    printf("Before casting: %d\n", a);
    printf("After casting view: %d\n", *p);
    printf("Original value still: %d\n", a);

    return 0;
}
