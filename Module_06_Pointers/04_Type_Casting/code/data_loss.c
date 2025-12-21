#include <stdio.h>

int main()
{
    int a = 300;
    char b;

    b = a;   // data loss

    printf("Original int = %d\n", a);
    printf("After casting to char = %d\n", b);

    return 0;
}
