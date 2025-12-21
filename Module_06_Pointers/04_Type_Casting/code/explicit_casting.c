#include <stdio.h>

int main()
{
    int a = 65;
    char b;

    b = (char)a;   // explicit casting

    printf("Integer value = %d\n", a);
    printf("Character value = %c\n", b);

    return 0;
}
