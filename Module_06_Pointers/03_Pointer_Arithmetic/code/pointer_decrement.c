#include <stdio.h>

int main()
{
    int a = 10;
    int *p = &a;

    printf("p before decrement = %p\n", p);
    p--;
    printf("p after decrement  = %p\n", p);

    return 0;
}
