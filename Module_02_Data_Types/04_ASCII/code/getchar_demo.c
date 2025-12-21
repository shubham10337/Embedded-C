#include <stdio.h>

int main()
{
    int a;

    printf("Press a key and hit Enter: ");
    a = getchar();

    printf("ASCII value = %d\n", a);
    printf("Character = %c\n", a);

    return 0;
}
